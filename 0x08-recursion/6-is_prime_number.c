#include "main.h"

/**
* aux_recursive-helper function > checking if a number is prime using recursion.
*
* @n: integer.
* @i: integer.
* Return: 1 if n is prime, 0 otherwise.
*/
int aux_recursive(int n, int i)
{
if (n <= i)
return (1);
if (n % i == 0)
return (0);
return (aux_recursive(n, i + 1));
}

/**
* is_prime_number-check if a number is prime using recursion.
*
* @n: integer.
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (aux_recursive(n, 2));
}
