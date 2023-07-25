#include "main.h"
/**
 * _ato -function that converts a string to an integer
 * @s: pointer
 */
int _atoi(char *s) 
{
	int sign = 1;
	int num = 0;
	int digit;

	while (*s != '\0') 
	{
		if (*s == '-') 
		{
			sign *= -1;
			s++;
		} 
		else if (*s == '+')
		{
			sign *= 1;
			s++;
		}
		if (*s >= '0' && *s <= '9') 
		{
			digit = *s - '0';
			num = num * 10 + digit;
			s++;
		}
		else 
		{
			break;
		}
	}
}
