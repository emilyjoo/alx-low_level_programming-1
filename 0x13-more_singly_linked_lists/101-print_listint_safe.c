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

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow && fast)
			{
				slow = slow->next;
				fast = fast->next;
				if (slow == fast)
					break;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}
