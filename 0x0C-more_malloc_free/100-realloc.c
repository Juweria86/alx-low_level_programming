#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @old_size:integer
 * @new_size: integer
 * @ptr:pointer
 *Return: pointer to the allocated memeory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *src, *dest;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	src = (char *)ptr;
	dest = (char *)new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = src[i];
	free(ptr);
	return (new_ptr);
}

