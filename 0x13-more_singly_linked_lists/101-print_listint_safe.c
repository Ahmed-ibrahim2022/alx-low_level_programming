#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/*** main - Entry point to test linked list functions.
* Return: Always 0.
*/
int main(void)
{
listint_t *head = NULL;

/* Build and print the linked list */
add_nodeint(&head, 1);
add_nodeint(&head, 7);
add_nodeint(&head, 12);
add_nodeint(&head, -98);
print_listint_safe(head);
/* Free the linked list */
free_listint2(&head);
return (0);
}
