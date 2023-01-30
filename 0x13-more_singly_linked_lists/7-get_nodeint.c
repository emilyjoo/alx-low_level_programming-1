#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index position
 *
 * @head: pointer to address of head pointer
 * @index: index position
 * Return: 0 if list is empty, otherwise node at position @index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	/* at this point, temp points to the node at index position */
	return (temp);
}
