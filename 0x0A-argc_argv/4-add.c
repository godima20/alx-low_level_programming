#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints addition of positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: if one of the numers contains symbols that
 * are not digits 1, otherwise 0
 */
int main(int argc, char *argv[])
{
	int n, num, total = 0;

	for (n = 1; n < argc; n++)
	{
		for (num = 0; argv[n][num]; num++)
		{
			if (argv[n][num] < '0' || argv[n][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[n]);
	}
	printf("%d\n", total);
	return (0);
}
