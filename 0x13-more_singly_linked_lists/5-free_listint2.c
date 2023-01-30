#include "lists.h"

/**
 * free_listint2 - frees a list and sets its head pointer to NULL
 *
 * @head: pointer to address of list's head pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *prev, *nxt;

	/* nothing to free */
	if (!head)
		return;
	/* set both prev and nxt to head to keep track of next node */
	prev = *head;
	nxt = *head;

	while (nxt)
	{
		nxt = nxt->next;
		free(prev);
		prev = nxt;
	}
	*head = NULL;
}
