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
	listint_t *temp1, *temp2;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
		return (NULL);
	temp2->n = n;
	temp2->next = NULL;
	if (idx == 0)
	{
		temp2->next = *head;
		*head = temp2;

		return (temp2);
	}
	temp1 = *head;
	while (temp1 != NULL && i < idx - 1)
	{
		temp1 = temp1->next;
		i++;
	}
	if (temp1 == NULL)
	{
		free(temp2);
		return (NULL);
	}
	temp2->next = temp1->next;
	temp1->next = temp2;

	return (temp2);
}
