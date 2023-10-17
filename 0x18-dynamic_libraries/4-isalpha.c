#include "main.h"
/**
 * _isalpha -checks for alphabetic character.
 * @c: ascii character
 * Return: 1 if alphabet else Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
