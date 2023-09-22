#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Creates a new node at the beginning of a linked list.
 * Return: The address of the new element, or NULL if fail.
 * @brick: Double pointer to the list_t list.
 * @str: A new string to add in the node.
 */

list_t *add_node(list_t **brick, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*brick);
	(*brick) = new;

	return (*brick);
}
