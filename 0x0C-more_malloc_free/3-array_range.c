#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @min: the first integer
 * @max: the last integer
 * Return: pointer of the array
 */
int *array_range(int min, int max)
{
	int i;

	int range;

	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	range = (max - min) + 1;

	arr = (int *)malloc(sizeof(int) * range);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}

