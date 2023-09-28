#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * Return: The converted number.
 * @b: String containing the binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (NULL);

	int sas = 0;
	int len = strlen(b), i;
	int base = 1;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				sas += base;
			base *= 2;
		}
	}
	else
	{
		return (0);
	}
	return (sas);
}
