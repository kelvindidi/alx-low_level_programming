#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 *
 * @argc: count args
 * @argv: makes string arrayvof args
 * Description:
 * This program takes two integer numbers as command line arguments,
 * multiplies them, and prints the result followed by a new line.
 *
 * Return:
 * 0 - If the program successfully multiplies the numbers and prints
 * the result.
 * 1 - If the program does not receive two arguments and prints an error
 *  message.
 *
 * Usage:
 * ./a.out <num1> <num2>
 *
 * Example:
 * Input: ./a.out 5 7
 * Output: 35
 *
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
