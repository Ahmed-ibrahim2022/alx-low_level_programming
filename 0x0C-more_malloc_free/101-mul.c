#include "main.h"

/**
* main - Multiplies two positive numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
unsigned long n;
int idx, inner_idx;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (idx = 1; idx < argc; idx++)
{
for (inner_idx = 0; argv[idx][inner_idx] != '\0'; inner_idx++)
{
if (argv[idx][inner_idx] > '9' || argv[idx][inner_idx] < '0')
{
printf("Error\n");
exit(98);
}
}
}
n = atol(argv[1]) * atol(argv[2]);
printf("%lu\n", n);
return (0);
}
