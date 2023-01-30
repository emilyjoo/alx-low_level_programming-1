#include "lists.h"

/**
 * listint_len - computes the number of elements in a list
 *
 * @h: head pointer to list
 * Return: 0 if list is empty, otherwise number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	/*for an empty list */
	if (!h)
		return (0);

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

/**
 * delete_nodeint_at_index - deletes a node at a particular index
 *
 * @head: pointer to address of head pointer
 * @index: position of node to be deleted
 * Return: -1 if function fails, otherwise 1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t list_len, i;
	listint_t *temp, *temp2;

	/* get length of list */
	list_len = listint_len(*head);

	/* 'list_len == 0' for empty list */
	if (index > list_len || list_len == 0)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		for (i = 1; i < index; i++)
			temp = temp->next;

		/* temp is now at idx position */
		temp2 = temp;
		temp = temp->next;
		temp2->next = temp->next;
		free(temp);
	}
	return (1);
}
