#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - function
 *@grid: 2d array
 *@height:int
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		height--;
		free(grid[height]);
	}
	free(grid);
}
