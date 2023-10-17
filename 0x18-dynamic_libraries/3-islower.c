#include "main.h"
/**
 * _islower -checks for lowercase character.
 * @c: character in ascii code
 * Return: 1 if lower case else Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
