#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of two diagonals of a
 * square matrix of integers
 * @a: Array to calculate diagonals from
 * @size: size of array
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 += a[j * size + k];
		k--;
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
