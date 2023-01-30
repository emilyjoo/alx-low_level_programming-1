#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to address of head pointer
 * @n: node data
 * Return: nULL if function fails, otherwise address of newly created node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
