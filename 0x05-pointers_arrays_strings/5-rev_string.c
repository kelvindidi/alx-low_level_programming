#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string.
 * @str: Pointer to the string to be reversed.
 */
void rev_string(char *str)
{
	int length = strlen(str);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = str[i];

		str[i] = str[j];
		str[j] = temp;
	}
}

