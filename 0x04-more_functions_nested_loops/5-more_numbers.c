#include "main.h"

/**
 * more_numbers - Prints 10 lines
 * Return: 10 times of numbers 0 to 10
 */

void more_numbers(void)

{
	int counter;
	int number;

	for (counter = 0; counter <= 9; counter++)
	{
	for (number = 0; number <= 14; number++)
	{
	if (number > 9)
	{
	_putchar(number / 10 + '0');
	}
	_putchar(number % 10 + '0');
	}
	_putchar('\n');
	}
}
