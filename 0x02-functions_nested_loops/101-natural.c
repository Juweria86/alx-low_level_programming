#include <stdio.h>
/**
 *main -a program that prints the sum of all the multiples of 3 or 5 < 1024.
 *Return: 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i <= 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
