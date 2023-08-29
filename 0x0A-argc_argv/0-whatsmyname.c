#include <stdio.h>
#include <stdlib.h>

/**
* print_program_name - Prints the program's name
*
* @program_name: Pointer to the program's name
*/
void print_program_name(char *program_name)
{
printf("%s\n", program_name);
}

/**
* main - Entry point
*
* @argc: Counts the number of parameters that go into main
* @argv: Pointer>array>pointers containing str entering main
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
if (argc > 0)
print_program_name(argv[0]);
return (0);
}
