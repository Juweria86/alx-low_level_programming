#include "main.h"
/**
 * print_sign -function that prints the sign of a number.
 * @n: character
 * Return: 1 if greater than 0 or -1 negative or 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
