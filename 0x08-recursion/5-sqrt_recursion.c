#include "main.h"

/**
* aux_sqrt_recursive - helper function for calculating square root using recursion.
*
* @n: integer
* @i: integer
* Return: square root or -1 if not found
*/
int aux_sqrt_recursive(int n, int i)
{
if (i * i == n)
return i;
if (i * i > n)
return -1;
return aux_sqrt_recursive(n, i + 1);
}

/**
* _sqrt_recursion - returns the natural square root of a number using recursion.
*
* @n: integer.
* Return: natural square root of a number or -1 if not found.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;
return (aux_sqrt_recursive(n, 0));
}
