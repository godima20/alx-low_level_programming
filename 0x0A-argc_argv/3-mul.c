#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: the number of arguments given thr program
 * @argv: the array of pointers to the arguments
 *
 * Return: if the program gets two numbers 0
 * if the program do not get two argumenys 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	printf("%d\n", mult);
	return (0);
}
