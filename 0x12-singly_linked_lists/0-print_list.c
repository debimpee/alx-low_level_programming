#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: number of nodes
 *         [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}