#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search within.
 * @accept: The characters to search for.
 *
 * Description: This function searches 's' for the first
 * occurrence of any character in 'accept'.
 *
 * Return: A pointer to the first occurrence of any
 * character in 'accept' in 's', or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
