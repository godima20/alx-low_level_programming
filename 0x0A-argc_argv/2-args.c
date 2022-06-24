#include <stdio.h>
/**
 * main - prints all the arguments
 * @argc: the number of arguments
 * @argv: the array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
