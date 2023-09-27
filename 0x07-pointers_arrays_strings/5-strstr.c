#include <stdio.h>
/**
 * _strstr - Locate a substring within a string
 * @haystack: The string to search within
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring in 'haystack',
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *substring;
	char *hay_ptr;
	char *ndl_ptr;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			substring = haystack;
			hay_ptr = haystack;
			ndl_ptr = needle;

			while (*ndl_ptr != '\0' && *hay_ptr == *ndl_ptr)
			{
				hay_ptr++;
				ndl_ptr++;
			}

			if (*ndl_ptr == '\0')
				return (substring);
		}

		haystack++;
	}

	return (NULL);
}

