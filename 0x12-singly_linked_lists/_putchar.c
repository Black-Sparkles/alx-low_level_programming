#include "lists.h"

/**
 * _putchar - prints a character
 * @character: character to be printed
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
