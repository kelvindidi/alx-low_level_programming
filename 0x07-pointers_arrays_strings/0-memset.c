#include <stddef.h>
/**
* _memset - fills a memory area with a constant byte b for the first n bytes
* @s: pointer to a string
* @b: bytes to be filled with
* @n: number of times
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr = b;
		ptr++;
	}

	return (s);
}

