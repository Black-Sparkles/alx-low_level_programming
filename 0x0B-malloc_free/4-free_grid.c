#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function declaration
 * @grid: 2d array
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height);

/**
 * free_grid - function definition
 * @grid: 2d array
 * @height: height
 * Description: free up memory occupied
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
