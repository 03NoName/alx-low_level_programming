#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number, or 0 if
 * there are non-binary characters or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	if (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = (dec_val << 1) | (b[i] - '0');
	}

	return (dec_val);
}
