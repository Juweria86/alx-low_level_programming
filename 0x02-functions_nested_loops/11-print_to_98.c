#include <stdio.h>
/**
 * print_to_98 -prints all natural numbers from n to 98
 * @n: prints number to start from
 * Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			--n;
		else
			++n;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
