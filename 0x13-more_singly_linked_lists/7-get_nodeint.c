#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index position
 *
 * @head: pointer to address of head pointer
 * @index: index position
 * Return: NULL if list is empty or node doesn't exist,
 * otherwise node at position @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i, count = 0;

	if (!head)
		return (NULL);

	temp = head;
	ptr = head;
	/* to get length of list */
	while (ptr->next)
	{
		count++;
		ptr = ptr->next;
	}
	if (index <= count) /* when node exists */
	{
		for (i = 0; i < index; i++)
			temp = temp->next;
		/* at this point, temp points to the node at index position */
		return (temp);
	}
	return (NULL);
}
