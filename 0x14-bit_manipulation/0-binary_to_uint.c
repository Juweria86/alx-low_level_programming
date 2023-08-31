#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			result = (result * 2);
		}
		else if (b[i] == '1')
		{
			result = (result * 2) + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
