#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct formats - Sturct for each accepted format and its function
 * @c: format character
 * @f: Pointer to relevant print function
 */

typedef struct formats
{
	char c;
	void (*f)(va_list);
} print_struct;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);

#endif
