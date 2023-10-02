#include "main.h"

/**
 * _strcpy - Copy a string.
 * @dest: Destination string.
 * @src: Source string to copy.
 *
 * Description: This function copies the string 'src' to the 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';
	return (dest);
}
