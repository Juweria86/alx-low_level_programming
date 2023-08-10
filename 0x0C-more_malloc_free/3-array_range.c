#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
