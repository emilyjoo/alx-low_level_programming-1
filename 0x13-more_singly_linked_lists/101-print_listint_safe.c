#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints linked list safely
 *
 * @head: head of list
 * Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (!head)
		exit(98);

	fast = head;
	while (fast)
	{
		slow = fast;
		fast = fast->next;

		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);

		if (slow <= fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			break;
		}
	}
	return (count);
}
