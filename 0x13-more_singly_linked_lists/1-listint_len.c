#include "lists.h"
/**
 * listint_len - that return the number of elements in a linked listint.
 *
 * @h: return the number of elements.
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
