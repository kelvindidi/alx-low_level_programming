#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			/* Print leading tabs */
			for (j = 0; j < i; j++)
			{
				_putchar('\t');
			}
			/* Print the diagonal character */
			_putchar('\\');
			_putchar('\n');
		}
	}
}
