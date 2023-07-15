#include <stdio.h>
/**
 * main -Aprogram that prints alphabets in lower case followed by newline
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
