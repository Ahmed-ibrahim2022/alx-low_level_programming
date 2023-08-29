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
int i, exit_code, coins, cents, num_coins;
int coin_values[] = {25, 10, 5, 2, 1};
exit_code = 1;
coins = 0;
if (argc == 2)
{
if (is_number(argv[1]))
{
exit_code = 0;
cents = atoi(argv[1]);
if (cents >= 0)
{
for (i = 0; i < 5; i++)
{
num_coins = cents / coin_values[i];
coins += num_coins;
cents -= (num_coins * coin_values[i]);
}
}
}
}
if (exit_code == 0)
printf("%i\n", coins);
else
printf("%s\n", "Error");

return exit_code;
}
