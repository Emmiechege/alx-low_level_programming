#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a two  dimensional grid.
 * @grid: a pointer to a pointer.
 * @height: rows to be freed.
 * Return: nothing.
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
