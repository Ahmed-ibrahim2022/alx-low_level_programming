#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - Add a new node at the end of a listint_t list.
*@head: Pointer to the listint_t head
*@n: Integer to add to the node
*Return: Pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *tmp;
if (!head)
return (NULL);
node = malloc(sizeof(listint_t));
if (!node)
{
return (NULL);
}
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (node);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = node;
return (node);
}
