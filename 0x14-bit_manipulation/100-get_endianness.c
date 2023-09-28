#include "main.h"

/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	return (*ptr);
}
