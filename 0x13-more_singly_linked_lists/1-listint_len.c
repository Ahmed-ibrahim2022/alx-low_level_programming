#include "lists.h"

/**
* listint_len - Calculate the number of elements in a linked list.
* @h: Pointer to listint_t
* Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t num_nodes = 0;
while (h)
{
num_nodes += 1;
h = h->next;
}
return (num_nodes);
}
