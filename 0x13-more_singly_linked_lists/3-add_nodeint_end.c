#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 *
 * @head: pointer to address of a list's header pointer
 * @n: node data
 * Return: NULL if function fails, otherwise address of newly created list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = temp = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		/* at this point temp->next is NULL */
		temp->next = new;
	}
	return (temp);
}
