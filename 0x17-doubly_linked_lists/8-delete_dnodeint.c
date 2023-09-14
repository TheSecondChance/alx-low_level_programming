#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *un_a_node = *head;
	dlistint_t *delete_node_a = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = delete_node_a->next;
		free(delete_node_a);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (un_a_node && cont != idx)
	{
		cont++;
		un_a_node = un_a_node->next;
	}

	/* general case */
	if (cont == idx && un_a_node)
	{
		delete_node_a = un_a_node->next;
		if (delete_node_a->next)
		delete_node_a->next->prev = un_a_node;
		un_a_node->next = delete_node_a->next;
		free(delete_node_a);
		return (1);
	}

	return (-1);
}
