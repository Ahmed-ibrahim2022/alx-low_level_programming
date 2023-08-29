#include <stdio.h>
#include <stdlib.h>

/**
* multiply - Multiplies two integers
*
* @a: First integer
* @b: Second integer
* Return: Result of multiplication
*/
int multiply(int a, int b)
{
return a * b;
}

/**
* main - Entry point
*
* @argc: Counts the number of parameters that go into main
* @argv: Pointer of array of pointers containing strings entering main
* Return: 0 on success, 1 on error
*/
int main(int argc, char **argv)
{
int n, ex;
ex = 0;
if (argc != 3)
{
printf("%s\n", "Error");
ex = 1;
}
else
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
n = multiply(a, b);
printf("%i\n", n);
}
return ex;
}
