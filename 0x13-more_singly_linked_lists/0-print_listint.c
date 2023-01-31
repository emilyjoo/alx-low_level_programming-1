#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in a list
 *
 * @h: head pointer to list
 * Return: 0 if list is empty, otherwise number of nodes in a list
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
