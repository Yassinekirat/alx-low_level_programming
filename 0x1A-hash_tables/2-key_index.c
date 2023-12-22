#include "hash_tables.h"

/**
* key_index - Gets the index for a key in the hash table.
* @key: The key
* @size: The size of the array of the hash table.
*
* Return: index at which the key should be stored in the hash table.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
