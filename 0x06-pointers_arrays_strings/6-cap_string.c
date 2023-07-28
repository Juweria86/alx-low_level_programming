#include "main.h"
/**
 * cap_string -function that capitalizes all words of a string.
 * @str:pointer
 * Return: str;
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= '97' && str[i] <= '122')
		{
			str[i] -= '97' - '65';
		}
		capitalize_next = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
