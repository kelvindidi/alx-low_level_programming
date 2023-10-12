#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string that separates integers
 * @n: arg count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int v;
	va_list arg_list;

	if (separator == NULL || n == 0)
	{
		va_end(arg_list);
		return;
	}

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		v = va_arg(arg_list, int);
		if (i < n - 1)
			printf("%d%s", v, separator);
		else
			printf("%d", v);
	}
	putchar('\n');
	va_end(arg_list);
}

