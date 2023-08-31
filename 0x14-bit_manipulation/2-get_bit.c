#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit number
 * @index: index of bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;
	return (bit);
}
