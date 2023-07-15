#include <stdio.h>
/**
 * main -Aprogram that prints numbers of base 16 in lower case
 * Return: 0
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
