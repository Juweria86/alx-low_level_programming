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
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
