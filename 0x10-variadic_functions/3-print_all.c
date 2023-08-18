#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints all
 * @format: list of args passed to function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *ptr, *separator = "";
	int i;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
				case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
				case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
				case 's':
				ptr =  va_arg(args, char *);
				if (!ptr)
					ptr = "(nil)";
				printf("%s%s", separator, ptr);
				break;
				default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
