#include "main.h"

/**
 * _strstr - Locate a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Description: This function searches for the first
 * occurrence of the substring 'needle'
 *              in the string 'haystack'.
 *
 * Return: A pointer to the first occurrence of 'needle'
 * in 'haystack', or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
