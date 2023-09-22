#include "main.h"
#include <ctype.h>
/**
* cap_string - capitalize words in string
* @str: string to be worked on
* Return: capitalized string
*/

char *cap_string(char *str)
{
	int capitalizeNext = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || str[i] == ',' ||
		str[i] == ';' || str[i] == '.' || str[i] == '!' ||
		str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalizeNext = 1;
		}
		else
		{
			if (capitalizeNext)
			{
				str[i] = toupper(str[i]);
				capitalizeNext = 0;
			}
			else
			{
				str[i] = tolower(str[i]);
			}
		}
	}

	return (str);
}
