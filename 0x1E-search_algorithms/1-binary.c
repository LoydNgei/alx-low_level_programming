#include "search_algos.h"

/*
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: 0 always on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i, midpoint;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[right]);

		midpoint = (left + right) / 2;
		if (value == array[midpoint])
			return (midpoint);
		else if (value < array[midpoint])
			right = midpoint - 1;
		else
			left = midpoint + 1;
	}
	return (-1);
}
