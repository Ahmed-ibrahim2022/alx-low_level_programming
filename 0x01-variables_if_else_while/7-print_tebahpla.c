#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* description: 'print alphabet in reverse'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
