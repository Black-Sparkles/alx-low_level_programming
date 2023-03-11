#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints minimum number of coins
 * @argc: arguement count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int number_of_coins;
	int i;
	int coin_counting;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	number_of_coins = 0;

	for (i = 0; i < 5; i++)
	{
		coin_counting = cents / coins[i];
		number_of_coins += coin_counting;
		cents -= coin_counting * coins[i];
	}
	printf("%d\n", number_of_coins);
	return (0);
}
