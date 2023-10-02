#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function returns the length of the string 's'.
 *
 * Return: Length of the string 's'.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
