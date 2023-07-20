#include "main.h"
/**
 * print_triangle -prints triangle
 *@size: an integer
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (k = size - i; k > 1; k--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
