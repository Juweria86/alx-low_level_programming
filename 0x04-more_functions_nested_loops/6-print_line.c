#include "main.h"
/**
 * print_line -draws straight line.
 * @n: integer
 */
void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i = 1;

		while (i <= n)
		{
			putchar('_');
			i++;
		}
		_putchar('\n');
	}
}


