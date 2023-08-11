#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: the first integer.
 * @max: the last integer.
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = (min - max) + 1;

	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; min <= max; index++, min++)
	{
		ptr[index] = min;
	}
	return (ptr);
}

