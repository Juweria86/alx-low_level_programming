#include <stdio.h>
/**
 * main -Aprogram that prints alphabets in lower case and uppercase
 * Return: 0
 */
int main(void)
{
	int n = 97;
	int m =65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 122)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
