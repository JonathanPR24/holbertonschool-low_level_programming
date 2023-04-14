#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key string
 * @size: Size of the hash table array
 *
 * Return: Index of the key in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
