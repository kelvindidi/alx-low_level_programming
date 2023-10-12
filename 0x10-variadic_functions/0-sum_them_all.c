#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: arg count
 * @...: variable arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	va_start(arg, n);

	unsigned int i;
	int sum = 0;
	if (n == 0)
	{
		va_end(arg);
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int v = va_arg(arg, int);
		sum += v;
	}
	return (sum);
	va_end(arg);
}
