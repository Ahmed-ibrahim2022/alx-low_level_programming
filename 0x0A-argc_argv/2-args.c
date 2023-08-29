#include <stdio.h>
#include <stdlib.h>

/**
* print_arguments- Prints all command-line arguments
*
* @argc: Number of command-line arguments
* @argv: Array >strings containing command-line arguments
*/
void print_arguments(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
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
print_arguments(argc, argv);
return 0;
}
