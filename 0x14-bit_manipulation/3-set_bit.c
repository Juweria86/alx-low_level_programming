#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to value bit
 * @index: index of bit
 * Return: 1 if worked otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = 1UL << index;
	*n |= mask;

	return (1);
}
