#include "main.h"
/**
 * more_numbers -prints 10x numbers (0-14)
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}

	}
	_putchar('\n');
}

