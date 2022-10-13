#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Always 0 (Success), Error (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return(i);
		}
	}

	return (-1);
}
