#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * description: 'print without printf or puts'
 *
 * Return: Always 1 (Failure)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
