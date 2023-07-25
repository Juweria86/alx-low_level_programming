#include "main.h"
/**
 * puts_half -function that prints half of a string
 * @str: pointer
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	start = len / 2;
	if (len % 2 != 0)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
