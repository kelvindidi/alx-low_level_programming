#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Destination memory.
 * @src: Source memory.
 * @n: Number of bytes to copy.
 *
 * Description: This function copies 'n' bytes from
 * memory area 'src' to memory area 'dest'.
 *
 * Return: A pointer to the destination memory 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
