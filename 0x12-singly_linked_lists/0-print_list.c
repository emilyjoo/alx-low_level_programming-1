#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: head pointer to list
 * Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (!h)
		return (0);
	temp = h;

	while (temp)
	{
		if (!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
