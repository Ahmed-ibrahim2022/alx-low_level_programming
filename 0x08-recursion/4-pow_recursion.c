#include "main.h"

/**
* _pow_recursion_recursive-helper function > calculating power using recursion.
*
* @x: base.
* @y: exponent.
* Return: result of x raised to the power of y.
*/
int _pow_recursion_recursive(int x, int y)
{
if (y < 0)
return (-1);
else if (y != 0)
return (x * _pow_recursion_recursive(x, y - 1));
else
return (1);
}

/**
* _pow_recursion - returns the value of x raised to the power of y.
*
* @x: integer.
* @y: power.
* Return: result of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
return (_pow_recursion_recursive(x, y));
}
