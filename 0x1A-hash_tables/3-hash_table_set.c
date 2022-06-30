#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current_node;
	unsigned long int hash, index;

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;

	current_node = ht->array[index];
	if (current_node == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}



