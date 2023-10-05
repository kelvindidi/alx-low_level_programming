#include <stdio.h>

/**
 * main - prints number of args
 * @argc: counts args on program command line
 * @argv: string array of  args on program command line
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
