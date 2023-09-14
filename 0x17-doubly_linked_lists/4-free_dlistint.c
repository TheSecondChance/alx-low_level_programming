#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 *
 * Return: nothing this is void func
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_current
	dlistint_t *next_node

	if (head)
	{
		node_current = head;
		next_node = head->next;
		while (next_node)
		{
			free(node_current);
			node_current = next_node;
			next_node = next_node->next;
		}
		free(node_current);
	}
}
