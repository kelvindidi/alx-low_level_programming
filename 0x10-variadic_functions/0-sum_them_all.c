#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: arg count
 * @...: variable arguments
 * Return: sum of args if n is  not equal to 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int v;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
	{
		va_end(arg);
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		v = va_arg(arg, int);
		sum += v;
	}
	return (sum);
	va_end(arg);
}
