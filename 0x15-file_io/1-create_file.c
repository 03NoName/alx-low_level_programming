#include "main.h"

/**
 * create_file - Creates a file.
 * Return: If function fails --1
 * Or else -1.
 * @filename: Creates pointer that create's a file name.
 * @text_content: Creates pionter that creates
 * a string to write to a file.
 */

int create_file(const char *filename, char *text_content)
{
	int nf, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	nf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(nf, text_content, len);

	if (nf == -1 || n == -1)
		return (-1);

	close(nf);

	return (1);
}
