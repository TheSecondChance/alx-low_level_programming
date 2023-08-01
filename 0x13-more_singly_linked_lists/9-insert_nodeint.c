#include "lists.h"
/**
 * insert_nodeint_at_index - that inserts a new at given poistion.
 * @head: that have node.
 * @idx: position
 * @n: int that new node have
 * Return: i don't know.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp1 = *head;
	lsitint_t *temp2 = malloc(sizeof(listint_t));

	temp2->n = n;
	temp2->next = NULL;

	idx--;
	while (idx != 0)
	{
		temp1 = temp1->next;
		idx--;
	}
	temp2->next = temp1->next;
	temp1->next = temp2;

	return (temp2);
}
