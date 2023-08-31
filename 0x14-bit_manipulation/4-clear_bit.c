#include "main.h"
#include <stddef.h>
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: value of bit
 * @index: index of bit
 * Return: 1 if it worked otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
