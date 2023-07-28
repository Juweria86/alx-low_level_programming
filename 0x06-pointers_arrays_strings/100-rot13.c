#include "main.h"
/**
 * rot13 -function that encodes a string using rot13
 * @str: pointer
 * Return: ptr
 */
char *rot13(char *str)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r13[] = "nopqrstuvvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot13[i])
			{
				*str = r13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
