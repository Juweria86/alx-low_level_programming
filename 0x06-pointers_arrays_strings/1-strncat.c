#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
		ptr++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr++ = src[i];
	}
	*ptr = '\0';
	return (dest);
}
