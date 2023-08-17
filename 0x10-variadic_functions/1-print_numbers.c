#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @n: number of integers of the parameters
 * @separator: string between integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, result;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(numbers, int);
		printf("%d", result);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}

