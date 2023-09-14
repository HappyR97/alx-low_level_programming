#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: character to print (from va_list)
 *
 * Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: integer to print (from va_list)
 *
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float number
 * @args: number to print (from va_list)
 *
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - Prints a string
 * @args: string to print (from va_list)
 *
 * Return: void
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char*);
	char *nil = "";

	switch (*str)
	{
		case '\0':
			nil = "(nil)";
			break;
		default:
			printf("%s", str);
	}
	printf("%s", nil);
}

/**
 * print_all - Prints argument depending on its format
 * @format: string of format chars
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list args;

	print_struct arr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	va_start(args, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == arr[j].c)
			{
				arr[j].f(args);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
