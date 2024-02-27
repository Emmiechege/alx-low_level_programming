#include "hash_tables.h"

/**
 * key_index - get index at which a key/value pair should
 *             be stored in array of a hash table.
 *@key: key to get its index.
 *@size: size of the array of the hash table.
 *
 * Return: index of the key.
 *
 * Description: uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
