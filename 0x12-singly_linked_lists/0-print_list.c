#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
}
