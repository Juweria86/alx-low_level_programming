#include "main.h"
/**
 * _isdigit -checks checks for a digit (0 through 9).
 * @c: an integer
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
