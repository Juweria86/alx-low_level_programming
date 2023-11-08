#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of the array
 * Return: the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result;

	result = malloc(sizeof(hash_table_t));
	if (result == NULL)
		return (NULL);

	result->size = size;
	free(result);
	return (result);
}
