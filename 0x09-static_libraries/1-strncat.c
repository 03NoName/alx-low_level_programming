#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: Source string pointer.
 * @n: Number of bytes to be concatenated.
 * Return: Pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
int length_of_string, z;
/* Z is an alternative for n bytes of src to be concatenated */
/* length_of_string = length of destination string */

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
	length_of_string++;
}
for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
{
	dest[length_of_string] = src[z];
}
dest[length_of_string] = '\0';
return (dest);
}
