#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - prints a char
 * @arg: a list of arguments that points to
 * the charater to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - prints an int
 * @arg: a list of arguments poiting to the integer
 */
void print_int(va_list arg)
{
	int num;

	num va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - prints a float
 * @arg: a list of arguments poiting to the float
 * to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything, and a new line
 * @format: a string of characters that represent the arguments
 * types
 * @...: a variable number of arguments to be printed
 *
 * Description: any argument not of type char, int, float or
 * char * is ignored. if a string argument is NULL, (nil) is
 * printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
