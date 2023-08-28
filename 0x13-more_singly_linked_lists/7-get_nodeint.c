#include "lists.h"

/**
* get_nodeint_at_index - Get the nth node of a linked list.
* @head: Pointer to the listint_t head
* @index: Index of the node to retrieve
* Return: Pointer to the nth node, or NULL if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i;
for (i = 0; i < index && current; i++)
{
current = current->next;
}
return (current);
}
