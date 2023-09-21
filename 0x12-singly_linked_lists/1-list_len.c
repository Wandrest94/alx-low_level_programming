#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
<<<<<<< HEAD
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
=======
 size_t n = 0;

 while (h)
 {
 n++;
 h = h->next;
 }
 return (n);
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
}
