#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: takes in the count of the program command line arguments
 * @argv: makes a string array of the program command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
