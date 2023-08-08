#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  duplicates string
 * @str: pointer
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 1, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
