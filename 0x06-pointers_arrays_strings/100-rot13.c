#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int s = 0, s1;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			      'G', 'H', 'I', 'J', 'K', 'L',
			      'M', 'N', 'O', 'P', 'Q', 'R',
			      'S', 'T', 'U', 'V', 'W', 'X',
			      'Y', 'Z', 'a', 'b', 'c', 'd',
			      'e', 'f', 'g', 'h', 'i', 'j',
			      'k', 'l', 'm', 'n', 'o', 'p',
			      'q', 'r', 's', 't', 'u', 'v',
			      'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (str[s])
	{
		for (s1 = 0; s1 < 52; s1++)
		{
			if (str[s] == alphabet[s1])
			{
				str[s] = rot13key[s1];
				break;
			}
		}
		s++;
	}
	return (str);
}
