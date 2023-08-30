#include "main.h"

/**
 * _strlen_recursion - Calculates length of a string
 * @s: string to calculate length
 *
 * Return: Length (int)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindrome_checker - Helper function to is_palindrome
 * @s: String to check if palindrome
 * @n: an int
 * @m: an int that will hold value of length - 1
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int palindrome_checker(char *s, int n, int m)
{
	if (*(s + n) == *(s + m) && m == 0)
		return (1);
	if (*(s + n) != *(s + m))
		return (0);
	return (palindrome_checker(s, n + 1, m - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome or not
 * @s: String to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int m = _strlen_recursion(s) - 1;

	return (palindrome_checker(s, 0, m));
}
