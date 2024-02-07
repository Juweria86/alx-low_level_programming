#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array.
 * @size: size of the array.
 * @value: value to be searched for.
 * Return: always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;
	int mid, i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; ++i)
			printf("%d%s", array[i], (i == r) ? "\n" : ", ");

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
