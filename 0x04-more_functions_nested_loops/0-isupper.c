#include "main.h"
/**
 * _isupper -checks for uppercase character
 * @c: an integer.
 * Return: 1 if uppercase else return: 0.
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
