#include "hash_tables.h"

/**
* hash_table_print - contents of a hash table.
* @ht: The hash table to print.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	int printed = 0;

	hash_node_t *entry;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];

		while (entry)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", entry->key, entry->value);
			entry = entry->next;
			printed = 1;
		}
	}

	printf("}\n");
}
