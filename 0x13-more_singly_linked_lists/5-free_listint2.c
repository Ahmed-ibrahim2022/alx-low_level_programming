#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 -Free a linked list and set head > NULL.
* @head: Pointer to the listint_t head
*/
void free_listint2(listint_t **head)
{
listint_t *current, *temp;
if (!head || !(*head))
return;
current = *head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
