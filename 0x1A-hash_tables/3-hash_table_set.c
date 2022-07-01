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
	unsigned long int index;

	index = key_index((const unsigned char *) key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key =strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (0);
	}
	node->next = NULL;

	current_node = ht->array[index];
	if (current_node == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		while(current_node)
		{
			if (strcmp(key, current_node->key) == 0)
			{
				free(current_node->value);
				current_node->value = strdup(value);
				return (1);
			}
			current_node = current_node->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}



