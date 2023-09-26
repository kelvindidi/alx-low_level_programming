#include <stdio.h>

/**
 * _strchr - Locate the first occurrence of a character in a string
 * @s: The string to search within
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}
	return (NULL);
}
