#include "main.h"

/**
 * swap_int - Swaps values of two vars
 * @a: Address of first var
 * @b: Address of second var
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
