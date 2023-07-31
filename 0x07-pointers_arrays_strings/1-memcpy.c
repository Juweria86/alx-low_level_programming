#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: an integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r;

	for (r = 0; r < i && src[r] != '\0'; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}

