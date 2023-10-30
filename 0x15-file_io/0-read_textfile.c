#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and prints to POSIX STDOUT.
 * Return: n - Actual number of bytes read and printed
 * 0 when function is wrong or filename is NULL.
 * @filename: Text file being read.
 * @letters: Number of letters to be read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t nf;
	ssize_t n;
	ssize_t s;

	nf = open(filename, O_RDONLY);
	if (nf == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(nf, buf, letters);
	n = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(nf);
	return (n);
}
