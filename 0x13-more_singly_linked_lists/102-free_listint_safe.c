#include <stdio.h>
#include "lists.h"

/**
* main - Entry point to test linked list functions.
* Return: Always 0.
*/
int main(void)
{
listint_t *head = NULL;
/* Build the linked list */
add_nodeint(&head, 1);
add_nodeint(&head, 7);
add_nodeint(&head, 12);
add_nodeint(&head, -98);
/* Free the linked list and print the number of freed elements */
size_t freed_elements = free_listint_safe(&head);
printf("Number of freed elements: %zu\n", freed_elements);
return (0);
}
