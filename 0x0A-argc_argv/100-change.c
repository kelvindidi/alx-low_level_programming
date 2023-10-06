#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins for change.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return:
 * 0 - If the program successfully calculates and prints the minimum number of
 * coins.
 * 1 - If the number of arguments passed to the program is not
 * exactly 1, or if the argument is negative.
 */

int main(int argc, char *argv[])
{
	int cents, coin_count, i;
	int coins[5] = {25, 10, 5, 2, 1};

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

	coin_count = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
