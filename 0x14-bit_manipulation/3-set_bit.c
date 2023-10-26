#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1.
 * Return: 1 for success, -1 for failure.
 * @index: index of the bit to set to 1.
 * @s: pointer to the number to change.
 */

int set_bit(unsigned long int *s, unsigned int index)
{
	if (index > 63)
		return (-1);

	*s = ((1UL << index) | *s);
	return (1);
}
