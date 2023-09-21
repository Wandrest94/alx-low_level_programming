#include <stdlib.h>
#include "lists.h"

/**
 * free_list -function that will free a linked list
 * @head: list_t is the list that will be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
