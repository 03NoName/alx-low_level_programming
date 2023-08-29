#include "main.h"

/**
 * _memcpy - Function copies @n bytes from memory
 * area @src to memory area @dest
 * @n: Function copies
 * @src: Bytes from memory area
 * @dest: To memory area
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
