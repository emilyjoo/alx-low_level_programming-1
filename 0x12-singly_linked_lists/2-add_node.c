#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to address of head pointer
 * @str: string - (malloc'ed string)
 * Return: address of newly created node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* to get lenght of @str */
	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	if (!*head)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
