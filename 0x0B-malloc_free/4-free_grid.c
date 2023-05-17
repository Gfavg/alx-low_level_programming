#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2D grid to be freed
 * @height: height of array
 *
 * Return: 0 on success
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
