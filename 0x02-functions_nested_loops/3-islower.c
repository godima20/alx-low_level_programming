#include "main.h"
/**
 * main - entry point of the program
 *
 * Description - Checks for lowercase character
 * @c: The chaaracter to be checked
 *
 * Return: 1 if the character is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
