#include <stdio.h>

/**
 * swap_int - swaps the values of 2 integers
 * @a: first integer to be swapped
 * @b: swconf integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int*a, int*b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
