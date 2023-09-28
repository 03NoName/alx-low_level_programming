#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @s: number to print in binary
 */

void print_binary(unsigned long int s)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = s >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
