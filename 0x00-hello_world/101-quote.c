#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point of the program
 *
 * Description - prints and a piece of art is useful
 *
 * Return: Always 1
 */
int main(void)
{
	write(1, "and that piece of art is useful -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
