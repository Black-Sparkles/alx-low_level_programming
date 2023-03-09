#include "main.h"

/**
 * _print_rev_recursion - brings a string in reverse
 * @s: the string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
