#include "lists.h"
/**
 * pop_listint - dleletes teh head node of a list.
 * @head: nodes delete
 * Return: zero if liked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);

	if ((*head)->next == NULL)
	{
		*head = NULL;
	}
	else
	{
		listint_t *temp = *head;
		listint_t *temp2 = *head;

		while (temp->next != NULL)
		{
			n = temp->n;
			temp2 = temp;
			temp = temp->next;
		}
		temp2->next = NULL;
		free(temp);
		temp = NULL;
	}
	return (n);
}
