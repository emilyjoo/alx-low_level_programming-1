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
 * insert_nodeint_at_index - inserts a new node at an index position
 *
 * @head: pointer to address of head pointer
 * @idx: index position
 * @n: node data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t list_len, i;
	listint_t *temp, *new_node;

	/* get length of list */
	list_len = listint_len(*head);

	/* 'list_len == 0' for empty list */
	if (idx > list_len || list_len == 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	temp = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (i = 1; i < idx; i++)
			temp = temp->next;

		/* temp is now at idx position */
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
