#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: the character
 * Return 0n success 1.
 * 0n error, -1 is returned, and error is set appropriatedly.
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
