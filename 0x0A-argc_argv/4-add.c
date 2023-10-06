#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/***
 * main - Adds positive numbers.
 * @argc: count args
 * @argv: stores args in string arrays
 * Description:
 * This program takes multiple integer numbers as command line arguments,
 * adds the positive numbers, and prints the result followed by a new line.
 *
 * Return:
 * 0 - If the program successfully adds the positive numbers and prints the result.
 * 1 - If no numbers are passed to the program or if any argument contains non-digit symbols.
 */


int main(int argc, char *argv[]) {
	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (int j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return 1;
			}
		}

		int num = atoi(arg);
		if (num > 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return 0;
}
