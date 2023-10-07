#include "hash_tables.h"

/**
 * hash_table_print - This for prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *separate;

	if (ht == NULL)
		return;

	printf("{");
	separate = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", separate, tmp->key, tmp->value);
			separate = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
