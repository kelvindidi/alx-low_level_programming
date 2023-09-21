#include "main.h"
#include <ctype.h>
/**
* string_toupper - turns lowercase to uppercase
* Return: uppercase string
* @str: string to be changed
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
