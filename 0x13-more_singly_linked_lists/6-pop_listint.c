#include "lists.h"
/**
 * pop_listint - dleletes teh head node of a list.
 * @head: nodes delete
 * Return: zero if liked list is empty
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;
	listint_t *temp2;

	if (*head == NULL)
		return (0);

	temp2 = *head;

	num = temp2->n;

	temp = temp2->next;

	free(temp2);
	*head = temp;

	return (num);
}
