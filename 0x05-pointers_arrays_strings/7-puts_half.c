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
	int j;

	if (length % 2 == 0)
	{
		while (j < length/2)
		{
			putchar(str[j]);
			j++;
		}
	}
	else
	{
		while (j < (length - 1)/2)
		{
			putchar(str[j]);
			j++;
		}
	}
}
