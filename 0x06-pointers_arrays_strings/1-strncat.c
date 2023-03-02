#include "main.h"

/**
 * _strncat - adds two strings
 * @dest: string to be appended on
 * @src: string to be appended to dest
 * @n: number of bytes from src
 * Return: pointer to the resulting dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
