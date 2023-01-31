#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: pointer to address of head pointer
 * Return: address of first node or NULL is list is empty
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	/* for an empty list */
	if (!*head)
		return (NULL);

	/* set prev to first node */
	prev = *head;

	curr = (*head)->next;
	*head = (*head)->next;
	prev->next = NULL; /* first node is made last node */

	while (*head)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	/*at this point, head points to NULL and prev points to first node */
	/* head is therefore set to the first node */
	*head = prev;
	return (*head);
}
