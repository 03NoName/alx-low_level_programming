#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * Return: Number of nodes.
 * @a: Linked list of type listint_t to print.
 */

size_t print_listint(const listint_t *a)
{
	size_t num = 0;

	while (a)
	{
		if (a->n == 0)
		{
			printf("Encountered a NULL value in the list.\n");
		}
		else
		{
			printf("%d\n", a->n);
		}
		num++;
		a = a->next;
	}
	return (num);
}
