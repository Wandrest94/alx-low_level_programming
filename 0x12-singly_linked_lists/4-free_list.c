#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
<<<<<<< HEAD
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
=======
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
}
