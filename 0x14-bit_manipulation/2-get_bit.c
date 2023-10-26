#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a decimal number.
 * Return: Value of the bit.
 * @index: Index of the bit.
 * @s: Number to search.
 */
int get_bit(unsigned long int s, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (s >> index) & 1;

	return (bit_val);
}
