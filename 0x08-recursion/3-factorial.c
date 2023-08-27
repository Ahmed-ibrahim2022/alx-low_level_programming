#include "main.h"

/**
* factorial_recursive - calculates the factorial of a number using recursion.
*
* @n: integer.
* Return: factorial.
*/
static int factorial_recursive(int n)
{
if (n <= 1)
return 1;
return n * factorial_recursive(n - 1);
}

/**
* factorial - returns the factorial of a given number.
*
* @n: integer.
* Return: factorial.
*/
int factorial(int n)
{
if (n < 0)
return -1;
return factorial_recursive(n);
}
