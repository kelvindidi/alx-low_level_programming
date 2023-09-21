#include <string.h>

/**
 * _strncpy - copies a string to another with a limit of n characters
 * @dest: destination buffer to copy to
 * @src: source string to be copied from
 * @n: maximum number of characters to copy
 *
 * Return: A pointer to the destination buffer `dest`.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
