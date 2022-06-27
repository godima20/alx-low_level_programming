#include "main.h"
/**
 *  _islower - checks for lowercase character
 *  @c: The character that is supposed to be checked
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
