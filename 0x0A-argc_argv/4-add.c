#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - checks if a string is a number
* @s: string
*
* Return: 1 if string is a number, 0 otherwise
*/
int is_number(char *s)
{
int i, is_num, digit;
i = 0;
is_num = 1;
if (*s == '-')
i++;
for (; *(s + i) != 0; i++)
{
digit = isdigit(*(s + i));
if (digit == 0)
{
is_num = 0;
break;
}
}
return is_num;
}

/**
* main - Entry point
*
* @argc: Counts the number of parameters that go into main
* @argv: Pointer of array of pointers containing strings entering main
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
int i, sum, exit_code;
exit_code = 0;
sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (is_number(argv[i]))
sum += atoi(argv[i]);
else
exit_code = 1;
}
}
if (exit_code == 0)
printf("%i\n", sum);
else
printf("%s\n", "Error");
return exit_code;
}
