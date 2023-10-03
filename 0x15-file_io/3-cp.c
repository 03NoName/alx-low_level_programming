#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close all file descriptions.
 * @nf: File description to close.
 */

void close_file(int nf)
{
        int p;

        p = close(nf);

        if (p == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close nf %d\n", nf);
                exit(100);
        }
}

/**
 * main - Copies all contents of one file to another.
 * Return: 0 on success.
 * @argc: Number of arguements supplied to a program
 * @argv: Array of pointers to the set of arguments.
 *
 * Desc: If Argument count incorrect - exit code 97.
 * if file_from does not exist or can't be read  - exit code 98.
 * if file_to cannot be written to or created - exit code 99.
 * if file_from or file_to can't be  closed - exit code 100.
 *
 */

int main(int argc, char *argv[])
{
        int from, to, m, n;
        char *buffer;

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        buffer = create_buffer(argv[2]);
        from = open(argv[1], O_RDONLY);
        m = read(from, buffer, 1024);
        to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

        do {
                if (from == -1 || m == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't read from file %s\n", argv[1]);
                        free(buffer);
                        exit(98);
                }

                n = write(to, buffer, m);
                if (to == -1 || n == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't write to %s\n", argv[2]);
                        free(buffer);
                        exit(99);
                }

                m = read(from, buffer, 1024);
                to = open(argv[2], O_WRONLY | O_APPEND);

        } while (m > 0);

        free(buffer);
        close_file(from);
        close_file(to);

        return (0);
}
