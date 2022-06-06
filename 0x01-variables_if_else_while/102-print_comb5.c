#include <stdio.h>
/**
 * main - entry of the program
 *
 * Description - Prints two-two digit numbers
 *
 * Return - Always return 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar(',');
		}

	}
		putchar('\n');
		return (0);
}
