#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: Character checker
 * Return: 1 for digit character and 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
	{
	return (1);
	}
return (0);
}
