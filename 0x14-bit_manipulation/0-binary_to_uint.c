#include "main.h"

/**
 * binary_to_uint - it converts the binary number to an unsigned integer 
 * @b: the string containing @b
 * Return: the number that is converted
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int total = 0;
	int lens, i;
	int decval = 1;

	if (!b)
		return (0);

	for (lens = 0; b[lens] != '\0'; lens++);

	i = (lens - 1);
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			total += decval;
		decval *= 2;
	}

	return (total);
}
