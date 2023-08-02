#include "main.h"
/**
 * _print_rev_recursion -function that prints string in reverse order.
 *@s: pointer to a string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_puthar(*s);
}

