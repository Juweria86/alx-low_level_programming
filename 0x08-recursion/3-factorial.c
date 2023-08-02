#include "main.h"
/**
 * factorial -function that prints factorial of a number
 * @n: an integer
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
