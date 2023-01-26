#include "lists.h"

/**
 *  free_list - frees a list_t list
 *
 * @head: head pointer to list
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	temp = head;
	/* free malloc'ed string */
	while (temp->next)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
