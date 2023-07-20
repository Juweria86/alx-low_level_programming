#include "main.h"
/**
 * print_number -prints integers.
 * @n: an integer
 */
void print_number(int n)
{
	int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
