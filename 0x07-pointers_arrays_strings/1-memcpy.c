#include <stddef.h>
/**
* _memcpy - copies memory area
* @dest: pointer to string to be coopied from
* @src: string to b copied to
* @n: number of bytes to be coopied
* Return: s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (original_dest);
}

