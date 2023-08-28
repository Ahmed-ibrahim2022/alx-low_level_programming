#include "lists.h"
#include <stdlib.h>

/**
* free_listint - Free a linked list.
* @head: Pointer to the listint_t head
*/
void free_listint(listint_t *head)
{
listint_t *current, *temp;
current = head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
}
