#include "main.h"

/**
 * _strchr - Locate character in a string.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Description: This function searches for the first
 * occurrence of the character 'c' in the string 's'.
 *
 * Return: A pointer to the first occurrence of 'c'
 * in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
