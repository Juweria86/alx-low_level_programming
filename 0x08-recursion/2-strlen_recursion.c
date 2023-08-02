#include "main.h"
/**
 * _strlen_recursion -prints length of length
 * @s: pointer
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
