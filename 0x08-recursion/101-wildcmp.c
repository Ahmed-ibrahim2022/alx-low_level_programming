#include "main.h"

/**
* wildcmp_recursive - Compare strings recursively
* @s1: pointer to string parameter
* @s2: pointer to string parameter
* Return: 1 if strings match, 0 otherwise
*/
int wildcmp_recursive(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp_recursive(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp_recursive(s1 + 1, s2) || wildcmp_recursive(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp_recursive(s1 + 1, s2 + 1));
}
return (0);
}

/**
* wildcmp - Compare strings using wildcmp_recursive
* @s1: pointer to string parameter
* @s2: pointer to string parameter
* Return: 1 if strings match, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
return (wildcmp_recursive(s1, s2));
}
