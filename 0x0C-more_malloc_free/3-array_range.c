#include <stdlib.h>
#include "main.h"

/**
* array_range-Creates array >integers within given range.
* @min: The minimum value of the range.
* @max: The maximum value of the range.
*
* Return: Pointer to the newly created array.
*         NULL if malloc fails or min > max.
*/
int *array_range(int min, int max)
{
int range, i;
int *arr;
range = 0;
if (min > max)
return (NULL);
range = ((max + 1) - min);
arr = malloc(range * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < range; i++)
{
*(arr + i) = min + i;
}
return (arr);
}
