#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array.
 * @nmemb: an array of memory
 * @size: number of bytes
 * Return: pointer to the alocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *byte_ptr;
	unsigned int i, result;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		byte_ptr = (unsigned char *)ptr;
		result = nmemb * size;
		for (i = 0; i < result; i++)
			byte_ptr[i] = 0;
	}
	return (ptr);
}
