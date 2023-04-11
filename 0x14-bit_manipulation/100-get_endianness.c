#include <stdio.h>

/**
 * get_endianness - check the byte order
 *
 * Return: 0 or 1
 */
int get_endianness(void) {
	int j = 1;

	return *(char *)&j;
}
