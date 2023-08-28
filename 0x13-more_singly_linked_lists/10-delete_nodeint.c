#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - Delete a node at a given position in the list.
* * @head: Pointer to the listint_t head
* @index: Index of the node to be deleted
*
* Return: 1 if successful, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head, *prev;
unsigned int idx_node = 1;
if (!current)
return (-1);
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
while (current && idx_node < index - 1)
{
current = current->next;
idx_node++;
}
if (!current || !(current->next))
return (-1);
prev = current->next;
current->next = prev->next;
free(prev);
return (1);
}
