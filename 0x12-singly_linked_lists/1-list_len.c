#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
*
* @h: Pointer to a list_t structure.
*
* Return: The number of nodes in the list.
*/
size_t list_len(const list_t *h)
{
size_t num_nod;

num_nod = 0;
while (h != NULL)
{
h = h->next;
num_nod++;
}
return (num_nod);
}