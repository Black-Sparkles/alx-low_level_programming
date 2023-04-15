#include "main.h"

/**
 * set_bit - sets the value
 * @n: points to an unsigned long integer
 * @index: index
 * Return: one if true, -one if false
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
