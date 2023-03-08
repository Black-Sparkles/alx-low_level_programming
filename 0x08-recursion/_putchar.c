#include <unistd.h>

/**
 * This is the _putchar.c file used
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
