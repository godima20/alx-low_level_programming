#include "main.h"
int is_divisible(int b, int div);
int is_prime_number(int n);
/**
 * is_divisible - checks if a number is divisible
 * @div: the divisor
 * @b: the number to be checked
 *
 * Return: if number is divisible 0, not divisible 1
 */
int is_divisible(int b, int div)
{
	if (b % div == 0)
		return (0);
	if (div == b / 2)
		return (1);
	return (is_divisible(b, div + 1));
}
/**
 * is_prime_number - checks if the number is prime
 * @n: the number to be checked
 *
 * Return: if the integer is prime 1, 0 if not prime
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
       	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
