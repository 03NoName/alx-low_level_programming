#include <stdio.h>

/**
 * main - Task function
 * Return: always zero
 */

int main(void)
{
char z;

for (z = 'a'; z <= 'z'; z++)
putchar(z);

for (z = 'A'; z <= 'Z'; z++)
putchar(z);
putchar('\n');

return (0);
}
