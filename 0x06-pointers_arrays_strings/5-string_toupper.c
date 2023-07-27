#include "main.h"
/**
 * string_toupper -converts lowercase to uppercase.
 * @str: pointer
 * Return: str
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 97  && *p <= 122)
		{
			*p -= (97 - 65);  /* Convert lowercase letter to uppercase */
		}
		p++;
	}
	return (str);
}
