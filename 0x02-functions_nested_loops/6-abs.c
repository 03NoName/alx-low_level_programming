#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * Return: Absolute value
 * @c: The number computed
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;


		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
