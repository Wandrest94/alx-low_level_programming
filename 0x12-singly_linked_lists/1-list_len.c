#include <stdlib.h>
#include "lists.h"

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
