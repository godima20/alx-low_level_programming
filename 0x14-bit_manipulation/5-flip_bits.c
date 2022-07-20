#include "main.h"
/**
 * flip_bits - determine the number of bits to flip from
 * one number to another
 * @n: number
 * @m: number 2
 *
 * Return: How many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	difference = n ^ m;
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
	(difference > 0);
	return (diff_bits);
}
