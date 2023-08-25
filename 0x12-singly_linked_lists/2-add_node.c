#include "lists.h"
/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Pointer to the head of the linked list.
* @str: String to store in the new node.
* Return: Address of the updated head of the list.
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t nchar;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (nchar = 0; str[nchar]; nchar++)
		;

new->len = nchar;
new->next = *head;
*head = new;

return (*head);
}