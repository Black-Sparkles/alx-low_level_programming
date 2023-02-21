#include "main.h"

/**
 * print_times_table - Print the times table of the input, starting with 0.
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)

{

	int num, multiply, prod;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (multiply = 1; multiply <= n; multiply++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * multiply;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10) % 10) + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}

