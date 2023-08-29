#include "main.h"
#include <stdlib.h>

/**
* argstostr- Concatenates all the arguments> a program.
* @ac: Argument count.
* @av: Argument vector.*
* Return: Pointer to an array of char
*/
char *argstostr(int ac, char **av)
{
char *aout;
int total_length = 0, i, j, ia;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}
aout = malloc((total_length + 1) * sizeof(char));
if (aout == NULL)
return (NULL);
for (i = j = ia = 0; ia < total_length; j++, ia++)
{
if (av[i][j] == '\0')
{
aout[ia] = '\n';
i++;
ia++;
j = 0;
}
if (ia < total_length - 1)
aout[ia] = av[i][j];
}
aout[ia] = '\0';
return (aout);
}
