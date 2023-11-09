#include "hash_tables.h"
/**
 * key_index - returns key index of a hash table
 * @key: key of the index
 * @size: size of the array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
