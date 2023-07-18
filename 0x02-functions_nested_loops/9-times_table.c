#include "main.h"
/**
 * times_table -function that prints the 9 times table
 */
void times_table(void)
{
	int i;
	for (i = 0; i >= 9; i++)
	{
		_putchar(9 *  i);
		_putchar(',');
		_putchar(' ');
	}
}
