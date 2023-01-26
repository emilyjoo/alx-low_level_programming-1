#include "lists.h"

/**
 * list_len - computes the number of nodes (elements) in a list
 *
 * @h: header pointer to list
 * Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (!h)
		return (0);

	for (temp = h; temp; temp = temp->next)
		count++;
	return (count);
}
