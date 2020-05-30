#include "hash_tables.h"


/**
 * key_index - function that returns index of a key
 *
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index (On success)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code_index = hash_djb2(key) % size;

	return (hash_code_index);
}
