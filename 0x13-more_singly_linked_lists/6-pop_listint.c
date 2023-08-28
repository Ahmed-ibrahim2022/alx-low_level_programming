#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Delete the head node of a linked list and return its data.
* @head: Pointer to the listint_t head
* Return: Data of the deleted head node, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data = 0;
if (!head || !(*head))
return (0);
data = (*head)->n;
temp = *head;
(*head) = (*head)->next;
free(temp);
return (data);
}
