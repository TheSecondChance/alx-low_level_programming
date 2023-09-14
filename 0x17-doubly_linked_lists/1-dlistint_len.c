#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to list
 *
 * Return: number of node
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *m_node = h;
	size_t count = 0;

	while (m_node)
	{
		count++;
		m_node = m_node->next;
	}
	return (count);
}
