#include "lists.h"
/**
 * pop_listint - dleletes teh head node of a list.
 * @head: nodes delete
 * Return: zero if liked list is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (NULL);
	if (*head->next = NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		listint_t *temp = *head;
		listint_t *temp2 = *head;

		while (temp->link != NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
	return (*head);
}
