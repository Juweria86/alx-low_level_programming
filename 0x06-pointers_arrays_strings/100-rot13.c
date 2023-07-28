#include "main.h"
/**
 * rot13 -function that encodes a string using rot13
 * @str: pointer
 * Return: result
 */
char *rot13(char *str)
{
	static char result[256]; /* Allocate a static buffer for the result*/
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			c = ((c - 'a' + 13) % 26) + 'a'; /* Apply ROT13 to lowercase letters*/
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = ((c - 'A' + 13) % 26) + 'A'; /* Apply ROT13 to uppercase letters*/
		}
		result[i] = c;
	}
	result[i] = '\0';
	return (result);
}
