#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *  int_index - search an array for a specific integer
 *  @array: array with values
 *  @size: size of an array
 *  @cmp: compare function
 *  Return: either the integer of -1 if failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
