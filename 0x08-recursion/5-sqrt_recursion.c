#include "main.h"
int find_sqrt(int a, int sq);
int _sqrt_recursion(int n);
/**
 * find_sqrt - finds the natural square root
 * @a: the number to find its square root
 * @root: the root to be found
 *
 * Return: the square root and -1 if does not have natural square root
 */
int find_sqrt(int a, int sq)
{
	if ((sq * sq) == a)
		return (sq);
	if (sq == a / 2)
			return (-1);
		return (find_sqrt(a, sq + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number square root
 *
 * Return: returns the square root
 */
int _sqrt_recursion(int n)
{
	int sq = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (find_sqrt(n, sq));
}
