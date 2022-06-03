#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - Print all letters except q and e
 *
 * Return: Always returns 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
