#include "main.h"

/**
* _strlen_recursive - calculate the length of a string recursively.
* @s: pointer to string parameter.
* Return: length of the string.
*/
int _strlen_recursive(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursive(++s));
}

/**
* is_palindrome_recursive - check if a string is a palindrome recursively.
* @s: pointer to string parameter.
* @l: length of the string.
* Return: 1 if palindrome, 0 otherwise.
*/
int is_palindrome_recursive(char *s, int l)
{
if (l < 1)
{
return (1);
}
    
if (*s == *(s + l))
{
return (is_palindrome_recursive(s + 1, l - 2));
}
    
return (0);
}

/**
* is_palindrome - check if a string is a palindrome using recursion.
* @s: pointer to string parameter.
* Return: 1 if palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int len = _strlen_recursive(s);
return (is_palindrome_recursive(s, len - 1));
}
