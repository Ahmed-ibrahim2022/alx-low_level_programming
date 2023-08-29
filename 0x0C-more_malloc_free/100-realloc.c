#include <stdlib.h>
#include "main.h"

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: Pointer >memory previously allocated& malloc(old_size).
* @old_size: Size in bytes allocated for ptr.
* @new_size: Size in bytes of the new memory block.
*
* Return: Pointer >new memory block, NULL /ptr is NULL &
* new_size is > 0,
*         NULL if new_size is 0 and ptr is not NULL, otherwise ptr.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
}
if (new_size > old_size && (ptr != NULL))
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (new_ptr);
for (i = 0; i < old_size; i++)
new_ptr[i] = *((char *)ptr + i);
free(ptr);
}
return (new_ptr);
}
