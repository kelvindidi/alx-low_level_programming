#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts_half - prints half of a string
* @str: string to be worked on
*/

void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 == 0)
	{
		int j = (length / 2);

		while (j < length)
		{
			putchar(str[j]);
			j++;
		}
		putchar('\n');
	}
	else
	{
		int j = ((length - 1) / 2) + 1;

		while (j < length)
		{
			putchar(str[j]);
			j++;
		}
		putchar('\n');
	}
}
