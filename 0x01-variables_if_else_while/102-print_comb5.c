#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - Prints a two-two digit numbers
 *
 * Return: Always return 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num++)
		{
			putchar(num1 + '0');
			putchar(num2 +  '0');
			if (num1 == 97 && num2 == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
