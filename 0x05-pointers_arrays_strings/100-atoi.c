#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer ro convert
 * Return: a integer
 */

int _atoi(char *s)

{

	int c = 0;
	unsigned int vi = 0;
	int min = 1;
	int inv = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	inv = 1;
	vi = (vi * 10) + (s[c] - '0');
	c++;
	}
	if (inv == 1)
	{
	break;
	}
	c++;
	}
	vi *= min;
	return (vi);
}
