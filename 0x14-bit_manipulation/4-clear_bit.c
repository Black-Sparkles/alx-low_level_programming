#include "main.h"
/**
 * clear_bit - sets the value
 * @n: points to an unsigned long integer value
 * @index: index
 * Return: one if true, -one if false
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
