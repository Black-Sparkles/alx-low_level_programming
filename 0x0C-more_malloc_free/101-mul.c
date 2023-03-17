#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_len(char *str);
char *cr_array(int size);
char *it_zero(char *str);
void get_prod(char *prod, char *mult, int digit, int zero);
void add_num(char *last_prod, char *next_prod, int next_len);

/**
 * find_len - find length
 * @str: string
 * Return: length
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * cr_array - create array, initilaize it with *, adds null byte
 * @size: size of array
 * Description: 98 exists if there is insufficient space
 * Return: pointer to array
 */

char *cr_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = '*';

	array[index] = '\0';

	return (array);
}

/**
 * it_zero - iterates through string until it lands on a non-zero number
 * @str: string
 * Return: pointer to next non-zero number
 */

char *it_zero(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - convert digit to int
 * @c: character
 * Description: if is non-digit, 98 function exists
 * Return: pointer to int
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - multiplies string by a digit
 * @prod: buffer to store result
 * @mult: string
 * @digit: digit
 * @zero: number of leading zeroes
 * Description: if mult is non-digit, 98 function exists
 */

void get_prod(char *prod, char *mult, int digit, int zero)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zero--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult = '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_num - adds numbers in two strings
 * @last_prod: buffer storing final product
 * @next_prod: next product
 * @next_len: length of the next product
 */

void add_num(char *last_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(last_prod + 1))
		last_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *last_prod != 'x'; last_prod--)
	{
		num = (*last_prod - '0') + (*next_prod - '0');
		num += tens;
		*last_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
		}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*last_prod = (num % 10) + '0';
		tens = num / 10;

		last_prod--;
		next_prod--;
	}	
		
	if (tens)
	*last_prod = (tens % 10) + '0';
}
	
/**
 * main - multiplying two +ve num
 * @argv: argument vector
 * @argc: argument count
 * Description: if num of arg is incorrect or a num contain non-digits, 98 function exits
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *last_prod, *next_prod;
	int size, index, digit, zero = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = it_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = it_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	last_prod = cr_array(size + 1);
	next_prod = cr_array(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zero++);
		add_num(last_prod, next_prod, size - 1);
	}
	putchar('\n');
	free(next_prod);
	free(last_prod);

	return (0);
}
