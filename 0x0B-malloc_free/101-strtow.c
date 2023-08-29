#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional array.
* @grid: 2D array of char.
* @height: height of the array.
*
* Return: No return
*/
void free_grid(char **grid, unsigned int height)
{
if (grid != NULL && height != 0)
{
for (unsigned int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}

/**
* split_string - splits a string into words.
* @str: string.
*
* Return: Pointer to an array of strings
*/
char **split_string(char *str)
{
char **words;
unsigned int word_count = 0, idx = 0, word_start = 0;
if (str == NULL || *str == '\0')
return NULL;
for (; str[idx] != '\0'; idx++)
{
if (str[idx] != ' ' && (str[idx + 1] == ' ' || str[idx + 1] == '\0'))
word_count++;
}
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL || word_count == 0)
{
free(words);
return NULL;
}
for (unsigned int i = 0; i < word_count; i++)
{
while (str[word_start] == ' ')
word_start++;
unsigned int word_end = word_start;
while (str[word_end] != ' ' && str[word_end] != '\0')
word_end++;
unsigned int word_length = word_end - word_start;
words[i] = malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
free_grid(words, i);
return NULL;
}
for (unsigned int j = 0; j < word_length; j++)
words[i][j] = str[word_start + j];
words[i][word_length] = '\0';
word_start = word_end;
}
words[word_count] = NULL;
return words;
}
