#include "main.h"
/**
 * main - entry point of the program
 *
 * Description - Prints _putchar
 *
 * Return: Always return 0
 */
int main(void)
{
	char n[] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
	_putchar(n[b]);
	}
	_putchar('\n');
	return (0);
}
