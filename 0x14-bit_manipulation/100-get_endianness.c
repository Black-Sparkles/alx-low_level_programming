#include "main.h"

/**
 * get_endianness - it checks endianness
 * Return: 0 if it is a big endian, 1 if it is endian that is little
 */

int get_endianness(void)

{
	unsigned int x = 1;
	char *c;

	c = (char *)&x;

	return ((int)*c);
}
