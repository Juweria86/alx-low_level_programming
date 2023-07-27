#include "main.h"
/**
 * _strcmp -compares two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 < *s2) ? -15 : 15);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	return ((*s1 < *s2) ? -15 : 15);
}
