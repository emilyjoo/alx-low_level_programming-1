#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 *
 * @h: head of list
 * Return: size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *slow, *fast;

	if (!*h)
		return (0);

	fast = *h;
	while (fast)
	{
		slow = fast;
		fast = fast->next;

		size++;
		free(slow);

		if (slow <= fast)
			break;
	}
	*h = NULL;
	return (size);
}
