#include <stdio.h>
/**
 * main -Aprogram that prints numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
