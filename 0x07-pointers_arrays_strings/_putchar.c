#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: the character to print out
 * Return: On success 1
 * On error, -1 is returned an error is set 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
