#include "main.h"

/**
* factorial_recursive - helper function for calculating factorial using recursion.
*
* @n: integer.
* Return: factorial of n.
*/
int factorial_recursive(int n)
{
if (n <= 1)
return (1);
return (n * factorial_recursive(n - 1));
}

/**
* factorial - returns the factorial of a given number using recursion.
*
* @n: integer.
* Return: factorial of n.
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
return factorial_recursive(n);
}
