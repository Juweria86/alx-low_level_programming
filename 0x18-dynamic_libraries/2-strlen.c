#include "main.h"
/**
 * _strlen -function that returns the length of a string.
 *@s: character
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
