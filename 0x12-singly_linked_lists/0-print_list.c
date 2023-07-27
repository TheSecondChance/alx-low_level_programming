#include "list.h"
/**
 * print_list - print all the elements of list_t list
 * @h: passed fu
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", s->len, s->str);
		h = h->next;
		count++;
	}
	return (count);
}
