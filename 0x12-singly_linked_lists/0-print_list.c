#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * Return: the number of nodes printed
 * @n: pointer to the list_t list to print
 */

size_t print_list(const list_t *n)
{
	size_t t = 0;

	while (n)
	{
		if (!n->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", n->len, n->str);
		n = n->next;
		t++;
	}

	return (t);
}
