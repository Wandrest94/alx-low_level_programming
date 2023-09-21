#include <stdio.h>
#include "lists.h"

/**
 * print_list - normally prints the elements of  linked list
 * @h: is pointer to the list_t list to be printed
 *
 * Return: value or  number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
