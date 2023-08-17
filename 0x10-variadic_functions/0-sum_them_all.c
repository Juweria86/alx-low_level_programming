#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n:integer
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;
	va_list sum;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}
	va_end(sum);
	return (result);
}
