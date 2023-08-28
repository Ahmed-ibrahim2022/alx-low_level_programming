#include <stdio.h>
#include "lists.h"

/**
* main - Entry point to test linked list functions.
* Return: Always 0.
*/
int main(void)
{
listint_t *head = NULL;
/* Build the linked list with a loop */
listint_t *loop_node = add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
loop_node->next = head;
/* Find the start of the loop in the linked list */
listint_t *loop_start = find_listint_loop(head);
if (loop_start)
printf("Loop starts at address: %p\n", (void *)loop_start);
else
printf("No loop found in the linked list\n");
return (0);
}
