#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);
	unsigned int cat_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= s2_len)
		n = s2_len;

	cat_len = s1_len + n + 1;
	result = malloc(cat_len);

	if (result == NULL)
		return (NULL);

	_strcpy(result, s1);

	_strncat(result, s2, n);

	return (result);
	free(result);
}

