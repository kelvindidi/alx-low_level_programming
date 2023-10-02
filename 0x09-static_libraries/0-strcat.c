#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: Destination string.
 * @src: Source string to append.
 *
 * Description: This function concatenates the
 * string 'src' to the end of the string 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

