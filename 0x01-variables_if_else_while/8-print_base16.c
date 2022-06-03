#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - Prints the numbers of base 16 in lowercase
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'h'; alphabett++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
