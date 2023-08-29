#include <stdlib.h>

/**
* alloc_grid-Returns a pointer >2 dimensional array >integers.
*
* @width: Width of array.
* @height: Height of array.
*
* Return: Pointer to the array, or NULL if it fails.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width == 0 || height == 0)
return NULL;
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
free(grid);
return NULL;
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(grid[j]);
}
free(grid);
return NULL;
}
}
return grid;
}
