#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - Prints all single numbers of base 10
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num % 10 + '0');
	putchar('\n');
	return (0);
}
