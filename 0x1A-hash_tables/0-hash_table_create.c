#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occur  NULL.
 *         Otherwise  pointer to new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_T;
	unsigned long int i;

	hash_T = malloc(sizeof(hash_table_t));

	if (hash_T == NULL)
		return (NULL);

	hash_T->size = size;
	hash_T->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_T->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_T->array[i] = NULL;

	return (hash_T);
}
