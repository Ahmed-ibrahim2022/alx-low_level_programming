#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* main - Entry point > test linked list functions.
* Return: Always 0.
*/
int main(void)
{
listint_t *head = NULL;
listint_t *head2 = NULL;
listint_t *node;
/* Build and print the first linked list */
add_nodeint(&head2, 0);
add_nodeint(&head2, 1);
add_nodeint(&head2, 2);
add_nodeint(&head2, 3);
add_nodeint(&head2, 4);
add_nodeint(&head2, 98);
add_nodeint(&head2, 402);
add_nodeint(&head2, 1024);
print_listint_safe(head2);
/* Build and print the second linked list */
node = add_nodeint(&head, 0);
add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
node->next = add_nodeint(&head, 98);
add_nodeint(&head, 402);
add_nodeint(&head, 1024);
print_listint_safe(head);
return (0);
}
