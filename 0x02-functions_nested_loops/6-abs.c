#include "main.h"
/**
 * _abs -prints absolute value of integer.
 *  @i: an integer.
 *  Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
