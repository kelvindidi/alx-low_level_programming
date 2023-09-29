#include <stdio.h>

/**
 * factorial - prints the factorial of an integer
 * @n: integer to be worked on
 * Return: factorial of integer n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
