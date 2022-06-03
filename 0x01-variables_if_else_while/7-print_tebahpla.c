#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - Prints lowercase alphabets in reverse
 *
 * Return: Always returns 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
