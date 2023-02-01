#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an index position
 *
 * @head: pointer to address of head pointer
 * @idx: index position
 * @n: node data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int list_len = 0;
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/* inserts at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (list_len < idx - 1)
		{
			list_len++;
			temp = temp->next;
			/* when temp has gone out of the list.*/
			/* e.g. in the case of idx being negative */
			if (!temp)
				return (NULL);
		}
		/* temp is now at idx position */
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (new_node);
}
