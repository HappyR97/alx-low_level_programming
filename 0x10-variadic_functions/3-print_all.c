#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args - character to print (from va_list)
 *
 * Return: void
 */

void pint_char(va_list args)
{
	printf("%c", va_arg(args, char));
}

/**
 * print_int - Prints an integer
 * @args - integer to print (from va_list)
 *
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float number
 * @args - number to print (from va_list)
 *
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, float))
}

/**
 * print_str - Prints a string
 * @args - string to print (from va_list)
 *
 * Return: void
 */

void print_str(va_list args)
{
	printf("%s", va_arg(args, char *));
}

/**
 * print_all - Prints argument depending on its format
 * @format: string of format chars
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{

}
