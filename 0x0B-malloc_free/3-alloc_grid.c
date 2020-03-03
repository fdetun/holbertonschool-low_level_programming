#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - alloc_grid
 *
 * @width: width of grid
 * @height: height of grid
 * Return: returns pointer to grid created
 */
int **alloc_grid(int width, int height)
{
int **tab, i, j, k;

if (width <= 0 || height <= 0)
return (NULL);
tab = malloc(height * sizeof(int *));
if (tab == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
tab[i] = malloc(width * sizeof(int));
if (tab[i] == NULL)
{
i--;
while (i >= 0)
{
free(tab[i]);
i--;
}
free(tab);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
tab[j][k] = 0;
}
}
return (tab);
}
