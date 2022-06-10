#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, multipple of three,
 * fizz is printed instead of the number, multiples of five
 * buzz and both three and five fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int num1;

	for (num1 = 1; num1 <= 100; num1++)
	{
		if ((num1 % 3) == 0 &&  (num1 % 5) == 0)
			printf("FizzBuzz");
		else if ((num1 % 3) == 0)
			printf("Fizz");
		else if ((num1 % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num1);
		if (num1 != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
