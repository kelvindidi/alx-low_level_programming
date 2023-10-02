#include "main.h"

/**
 * _strncpy - Copy a string, up to 'n' bytes.
 * @dest: Destination string.
 * @src: Source string to copy.
 * @n: Maximum number of bytes to copy.
 *
 * Description: This function copies 'n' bytes from the string 'src' to 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
