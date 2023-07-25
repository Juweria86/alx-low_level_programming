#include "main.h"
/**
 * rev_string -prints string in reverse.
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	char temp;
	int i;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

