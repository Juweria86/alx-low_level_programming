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
/**
 * comparator -compares each character of the string.
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome -function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 if palindrome else return 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
