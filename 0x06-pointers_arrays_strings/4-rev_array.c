#include "main.h"

/**
 * reverse_array - Reverses content of an array of integers
 * @a: Array to reverse
 * @n: Number of elements of the array (length)
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
