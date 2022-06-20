#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square
 * matrix integer
 * @a: the matrix of integers
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, total1 = 0, total2 = 0;

	for (i = 0; i < size; i++)
	{
		total1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		total2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", total1, total2);
}
