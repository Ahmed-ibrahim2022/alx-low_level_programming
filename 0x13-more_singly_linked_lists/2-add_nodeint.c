#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - Add a new node at the beginning of a listint_t list.
* @head: Pointer to the listint_t head
* @n: Integer to add to the node
* Return: Pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
node = malloc(sizeof(listint_t));
if (!node)
{
return (NULL);
}
node->n = n;
node->next = *head;
*head = node;
return (node);
}
