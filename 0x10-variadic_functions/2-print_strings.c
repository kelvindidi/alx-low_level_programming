#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * This function takes a variable number of string arguments and prints them
 * to the standard output, separated by the specified separator. If the
 * separator is NULL, it won't be printed. If any of the input strings is NULL,
 * it will be printed as "(nil)".
 *
 * Print a new line at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;
	int count;

	count = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (count == 0 || (separator != NULL && i < n - 1))
		{
			printf("%s", string ? string : "(nil)");
			count++;
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
