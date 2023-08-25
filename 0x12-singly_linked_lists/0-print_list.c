#include "lists.h"

/**
* print_list - This function prints all the elements of a list_t list.
* @h: A singly linked list.
* Return: The number of elements in the list.
*/
size_t print_list(const list_t *h)
{
if (h == NULL)
return 0;

if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);

return 1 + print_list(h->next);
}
