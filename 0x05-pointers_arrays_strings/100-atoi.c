#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: the string to be converted
 * Return: returns the integer value to be converted
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num1 = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num1 = (num1 * 10) + (*s - '0');
		else if (num1 > 0)
			break;
	} while (*s++);
	return (num1 * sign);
}
