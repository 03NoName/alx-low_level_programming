#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * Return: Number of elements in n
 * @n: pointer to the list_t list
 */

size_t list_len(const list_t *n)
{
	size_t t = 0;

	while (n)
	{
		t++;
		n = n->next;
	}
	return (t);
}
