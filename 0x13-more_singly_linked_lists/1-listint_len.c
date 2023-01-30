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
