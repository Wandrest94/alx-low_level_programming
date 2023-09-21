#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
<<<<<<< HEAD
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
=======
 list_t *new;
 list_t *temp = *head;
 unsigned int len = 0;

 while (str[len])
 len++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->len = len;
 new->next = NULL;

 if (*head == NULL)
 {
 *head = new;
 return (new);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = new;

 return (new);
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
}
