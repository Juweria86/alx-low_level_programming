#include "main.h"
/**
 * is_prime_number -function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: an integer
 * @i: integer
 * Return: is_prime_helper
 */
int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper -checks for prime number
 * @n: integer
 * @i: integer
 * Return: is__prime_helper
 */
int is_prime_helper(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
