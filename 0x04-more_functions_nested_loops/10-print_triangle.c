#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int length, base;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			_putchar(' ');
			for (base = 0; base < size; base++)
				_putchar('#');
			if (length == size)
			continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
