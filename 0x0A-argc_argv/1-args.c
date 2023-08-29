#include <stdio.h>
#include <stdlib.h>

/**
* print_argument_count - Prints the count of arguments (excluding program name)
*
* @arg_count: Number of command-line arguments
*/
void print_argument_count(int arg_count)
{
printf("%i\n", arg_count);
}

/**
* main - Entry point
*
* @argc: Counts the number of parameters that go into main
* @argv: Pointer>array>pointers containing strings entering main
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
(void) argv; // Unused parameter, suppresses compiler warning
int argument_count = argc - 1; // Calculate the number>arguments
print_argument_count(argument_count);
return 0;
}
