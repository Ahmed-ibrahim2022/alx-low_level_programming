#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* description: 'print alphabet'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;

/* print the numbers 0 ~ 9 */
for (i = 48; i < 58; i++)
	putchar(i);

/* print the letters a ~ f */
for (j = 97; j < 103; j++)
	putchar(j);
putchar('\n');
return (0);
}
