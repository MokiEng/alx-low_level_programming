#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 *	integers using the Linear search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 If value is not present in array or if array is NULL.
 *	Otherwise Always EXIT_SUCCESS.
 */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
	{
		return (-1);
	}
	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}
	return (-1);
}
