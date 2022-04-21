#include "lists.h"

/**
 * print_list - prints all elements of a list of type list_t
 * @h: pointer to first elememt of a list of type list_t
 *
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
