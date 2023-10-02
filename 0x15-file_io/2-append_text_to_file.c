#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * Return: If filename Null or function gives error --1
 * If file not created user does not have write permissions --1
 * otherwise -1.
 * @filename: Pointer to file name.
 * @text_content: Adds string to the end of a file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int q, n, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	n = write(q, text_content, len);

	if (q == -1 || n == -1)
		return (-1);

	close(q);

	return (1);
}
