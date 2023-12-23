#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value with
 *                   key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value
 *
 * Return: If the key cannot be matched - NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ht_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	ht_node = ht->array[index];
	
	while (ht_node && strcmp(ht_node->key, key) != 0)
		ht_node = ht_node->next;

	return ((ht_node == NULL) ? NULL : ht_node->value);
}

