#include "main.h"
/**
 * leet -function that encodes a string into 1337.
 * @str: pointer
 * Return: str
 */
char *leet(char *str)
{

	int i;
	char leet_table[256] = {0};

	leet_table['a'] = '4';
	leet_table['A'] = '4';
	leet_table['e'] = '3';
	leet_table['E'] = '3';
	leet_table['o'] = '0';
	leet_table['O'] = '0';
	leet_table['t'] = '7';
	leet_table['T'] = '7';
	leet_table['l'] = '1';
	leet_table['L'] = '1';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_table[(unsigned char) str[i]])
		{
			str[i] = leet_table[(unsigned char) str[i]];
		}
	}
	return (str);
}
