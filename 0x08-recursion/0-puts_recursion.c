#include "main.h"

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    else
        _putchar('\n');
}
