#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n bytes of the second string.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes from s2 to concatenate.
*
* Return: Pointer to the concatenated string, or NULL if allocation fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;
if (n < s2_len)
s2_len = n;
if ((int)n < 0)
s2_len = 0;
char *concatenated_string = malloc(s1_len + s2_len + 1);
if (concatenated_string == NULL)
return (NULL);
for (i = 0; i <= s1_len; i++)
concatenated_string[i] = s1[i];
for (j = 0; j < s2_len; j++)
concatenated_string[j + s1_len] = s2[j];
concatenated_string[j + s1_len] = '\0';
return (concatenated_string);
}
