#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter.
*
* @str: String to be duplicated.
*
* Return: Pointer to the new allocated array, or NULL if it fails.
*/
char *_strdup(char *str)
{
char *new_str;
int str_len;
int i = 0;
if (str == NULL)
return (NULL);
for (str_len = 0; str[str_len] != '\0'; str_len++)
;
str_len++;
new_str = malloc(sizeof(char) * str_len);
if (new_str == NULL)
return (NULL);
while (i < str_len)
{
new_str[i] = str[i];
i++;
}
return (new_str);
}
