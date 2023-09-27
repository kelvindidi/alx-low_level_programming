#include <stdio.h>
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to search within
 * @accept: The string containing bytes to search for
 *
 * Return: Pointer to the byte in 's' that
 * matches one of the bytes in 'accept',
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp_accept = accept;

		while (*temp_accept != '\0')
		{
			if (*s == *temp_accept)
			{
				return (s);
			}

			temp_accept++;
		}

		s++;
	}

	return (NULL);
}

