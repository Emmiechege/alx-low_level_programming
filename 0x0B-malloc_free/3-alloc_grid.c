#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - pointer to pointer to allocate grid mem
 * @width: the columns
 * @height: the rows
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;

	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
				free(arr[i--]);
			free(arr);
			return (NULL);
		} for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
