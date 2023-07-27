#include "list.h"
/**
 * print_list - print all the elements of list_t list
 * @h: passed fu
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	while (*h != NULL)
	{
		h = s->next;
		count++;
	}
	return (count);
}
