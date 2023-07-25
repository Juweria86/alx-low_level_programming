#include "main.h"
/**
 * rev_string -function that reverses a string.
 * @s: pointer
 */
void rev_string(char *s) 
{
	char *p = s;
	while (*p != '\0') 
	{
		p++;
	}
	p--;
	while (s < p) 
	{
		char temp = *s;
		*s = *p;
		*p = temp;
		s++;
		p--;
	}
}

