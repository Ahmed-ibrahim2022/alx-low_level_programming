#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocate memory for an array using malloc.
* @nmemb: Number of elements in the array.
* @size: Size of each element in bytes.
*
* Return: NULL if size or nmemb is 0.NULL if malloc fails.
* Pointer to the allocated memory if successful.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
*((char *)(ptr) + i) = 0;
}
return (ptr);
}
