#include "lists.h"

/**
* sum_listint -Calculate the sum of all data > linked list.
* @head: Pointer to the listint_t head
* Return: Sum of data in the linked list
*/
int sum_listint(listint_t *head)
{
listint_t *current = head;
int sum = 0;
while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
