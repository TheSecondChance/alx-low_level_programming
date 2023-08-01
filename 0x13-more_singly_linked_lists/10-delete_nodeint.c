#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t node
 * @head: node parameter.
 * @index: index of the node.
 * Return: 1 if it succeded, -1 if it faild
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	
	prev = NULL;
	temp = *head;
	
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
