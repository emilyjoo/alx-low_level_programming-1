#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head pointer to list
*/
void free_listint(listint_t *head)
{
	listint_t *prev, *nxt;

	/* nothing to free */
	if (!head)
		return;
	/* set both prev and nxt to head to keep track of next node */
	prev = head;
	nxt = head;

	while (nxt)
	{
		nxt = nxt->next;
		free(prev);
		prev = nxt;
	}
}
