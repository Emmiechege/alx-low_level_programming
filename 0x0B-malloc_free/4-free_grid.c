#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid- frees the grid
 * @grid: pointer to pointer
 * @height: rows to be freed
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
