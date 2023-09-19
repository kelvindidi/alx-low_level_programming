#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints the reverse of a string
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
