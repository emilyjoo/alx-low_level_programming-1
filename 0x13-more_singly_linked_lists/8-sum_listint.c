#include "lists.h"

/**
 * sum_listint - computes the sum of all data of a linked list
 *
 * @head: head pointer
 * Return: 0 if list is empty, otherwise sum of data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	/* for empty list */
	if (!head)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
