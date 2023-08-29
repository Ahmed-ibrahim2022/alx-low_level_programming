#include "main.h"
#include <stdlib.h>

/**
* factorial - Calculate the factorial of a number.
* @n: The number.
*
* Return: The factorial of n, or -1 if n is negative.
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}

/**
* create_array - Creates an array of chars.
* @size: Size of the array.
* @c: Char to be stored.
*
* Return: Pointer to >array >chars,or NULL/size is 0 or if malloc fails.
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = malloc(sizeof(c) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
