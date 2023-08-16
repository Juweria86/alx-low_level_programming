#include "function_pointers.h"
/**
 * int_index -  searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to function to be used to compare
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
