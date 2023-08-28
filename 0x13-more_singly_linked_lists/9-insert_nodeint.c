#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - Insert a new node at a given position in the list.
* @head: Pointer to the listint_t head* @idx: Index at which to insert the new node
* @n: Value for the new node
* Return: Address of the new node, or NULL if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
listint_t *new_node;
unsigned int i;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; i++)
{
if (!current)
{
free(new_node);
return (NULL);
}
current = current->next;
}
if (!current)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
