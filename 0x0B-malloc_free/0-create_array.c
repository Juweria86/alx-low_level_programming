#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -function that creates an array of char
 * @size: integer
 * @c: character
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);

}

