#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @size: Size of the memory to allocate.
*
* Return: Pointer to the allocated memory, 
* or exits with status 98 if it fails.
*/
void *malloc_checked(unsigned int size)
{
void *memory;
memory = malloc(size);
if (memory == NULL)
exit(98);
return (memory);
}
