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
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = malloc((s1_len + s2_len + 1) * sizeof(n));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[s1_len + i] = s2[i];
	}
	result[s1_len + n] = '\0';
	return (result);
}

