#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a specific position
 * Edge cases:
 *			1. if list is empty
 *			2. if idx < 0
 *			3. if list is not empty and idx = 0
 *			4. if list is not empty and idx > 0
 *			5. if list is not empty and idx is 1 greater than number of nodes
 *			6. if list is not empty and idx out of range
 * @h: double pointer to head node of list
 * @idx: index position of new node, starting at 0
 * @n: new node data
 * Return: address of new node after insertion or NULL is insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*h && idx == 0) /* for empty list */
	{
		*h = new_node;
		return (new_node);
	}
	if (*h)
	{
		if (idx == 0) /* to insert at the beginning of the list */
			new_node->next = *h, (*h)->prev = new_node, *h = new_node;
		else
		{
			temp = *h;
			while (count < idx - 1)
			{
				count++;
				temp = temp->next;
				if (!temp) /* when idx is out of range */
					return (NULL);
			}
			if (temp->next) /* when operation is still within the list */
				temp->next->prev = new_node;
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
