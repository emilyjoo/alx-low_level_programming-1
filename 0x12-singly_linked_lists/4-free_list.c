#include "lists.h"

/**
 *  free_list - frees a list_t list
 *
 * @head: head pointer to list
*/
void free_list(list_t *head)
{
	list_t *old, *new;

	/* nothing to free */
	if (!head)
		return;

	/* set both old and new to head to keep track of next node */
	old = head;
	new = head;

	while (new->next)
	{
		new = new->next; /* now points to the next node */
		free(old->str); /* frees malloc'ed of previous node */
		free(old); /* frees the of previous node */
		old = new; /* then assign new node to old to be free */
	}
}
