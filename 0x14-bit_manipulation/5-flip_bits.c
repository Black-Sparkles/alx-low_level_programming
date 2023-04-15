#include "main.h"

/**
 * flip_bits - it counts the amount of bits to be converted
 * @n: number 1
 * @m: number 2
 * Return: amount of bits converted
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int i, count = 0;
	unsigned long int currentnum;
	unsigned long int spect = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currentnum = spect >> i;
		if (currentnum & 1)
			count++;
	}

	return (count);
}
