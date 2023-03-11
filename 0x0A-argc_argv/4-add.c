#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: adds 2 positive numbers
 * @argc: arguement count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add;
	int number;
	int arg_index;
	int char_index;

	add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (arg_index = 1; arg_index < argc; arg_index++)
	{
		for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
		{
			if (!isdigit(argv[arg_index][char_index]))
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[arg_index]);
		if (number < 0)
		{
			printf("Error\n");
			return (1);
		}
		add += number;
	}
	printf("%d\n", add);
	return (0);
}
