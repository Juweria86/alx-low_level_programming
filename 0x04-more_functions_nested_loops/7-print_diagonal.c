#include "main.h"
 /**
  * print_diagonal -draws a diagonal line.
  * @n: input integer
  */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		while (i <=  n)
		{
			_putchar('\');
			i++;
		}
		_putchar('\n');
	}
}
