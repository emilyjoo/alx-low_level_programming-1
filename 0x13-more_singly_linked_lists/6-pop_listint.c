#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 *
 * @head: pointer to address of head pointer
 * Return: 0 if list is empty, otherwise data of head node
*/
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	/* for empty list */
	if (!*head)
		return (0);

	/* temporarily hold address of head node */
	temp = *head;

	node_data = temp->n;

	/* head pointer points to next node so that head node can be freed */
	*head = temp->next;

	/* head node is deleted (freed) */
	free(temp);

	return (node_data);
}
