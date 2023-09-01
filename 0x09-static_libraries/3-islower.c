#include "main.h"

/**
 * _islower - Starting point
 * @c: Character to check lowercase
 * Description: A function that checks for lowercase character.
 * Return: 1-if lowercase, 0-if not.
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

}
