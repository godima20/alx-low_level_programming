#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Desccription - print all single digit numbers of base 10
 *
 * Return: Always returns 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
