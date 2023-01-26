#include "lists.h"
#include "string.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to address of head pointer
 * @str: string - (malloc'ed string)
 * Return: address of newly created node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	/* to get lenght of @str */
	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	temp = *head;
	if (!*head)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		/* at this point temp->next is NULL */
		temp->next = new;
	}
	return (*head);
}
