#include "main.h"

/**
 * prime_finder - Helper function to find if a number is a prime number
 * @n: Number to check if prime or not
 * @m: An integer we will increment recursively to check if 'n' is prime
 *
 * Return: 1 if prime, 0 if not prime
 */

int prime_finder(int n, int m)
{
	if (n % m == 0 && n == m)
		return (1);
	if (n % m == 0 && n != m)
		return (0);
	return (prime_finder(n, m + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number or not
 * @n: Number to check if prime or not
 *
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
