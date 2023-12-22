#include "hash_tables.h"

/**
* check_collision_in_node - check for collision in the whole list
* @head: head of the linked list
* @key: hash table key
* Return: 1 for success, 0 for failure
*/
hash_node_t *check_collision_in_node(hash_node_t *head, const char *key)
{
	hash_node_t *current_node = head;

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node);

		current_node = current_node->next;
	}

	return (current_node);
}

/**
* hash_table_set - Description: The function hash_table_set adds or
* updates the value of a key in a hash table.
* Parameters:
*    @ht: the hash table to be manipulated
*    @key: the key to be added or updated
*    @value: the value to be associated with the key
* Return: Returns 1 if successful, 0 if an error occurred
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp_node;
	unsigned long int idx, size;

	if (!ht || !key || !value || !(*key))
		return (0);

	size = ht->size;
	idx = key_index((const unsigned char *)key, size);
	tmp_node = check_collision_in_node(ht->array[idx], key);

	if (tmp_node)
	{
		free(tmp_node->value);
		tmp_node->value = strdup(value);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);

		new_node->value = strdup(value);
		new_node->key = strdup(key);
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}

	return (1);
}
