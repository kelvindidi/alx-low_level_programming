#include "main.h"

/**
 * _strncat - Concatenate two strings, using at most 'n' bytes from 'src'.
 * @dest: Destination string.
 * @src: Source string to append.
 * @n: Maximum number of bytes from 'src' to append.
 *
 * Description: This function concatenates 'n' bytes from
 * the string 'src' to the end of the string 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
