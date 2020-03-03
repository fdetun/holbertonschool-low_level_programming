#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free_grid
 * @grid: pointer to check
 * @height: int
 */

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
