#include "hash_tables.h"

/**
 * key_index - that generates a distributed index
 * according to a given hash provided
 * @key: key passed
 * @size: size of the hash
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
