#include "lists.h"
/**
* print_list - This function prints all the elements of a list_t list.
* @h: A singly linked list.
* Return: The number of elements in the list.
*/
size_t print_list(const list_t *h)
{
size_t num_nod;

num_nod = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
num_nod++;
}
return (num_nod);
}