#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - Prints alphabets in uppercase and lowercase
 *
 * Return: Always return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
