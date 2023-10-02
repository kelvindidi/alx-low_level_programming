#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The characters to include in the prefix.
 *
 * Description: This function calculates the length of
 * the maximum initial segment of 's'
 *              that consists of only the characters found in 'accept'.
 *
 * Return: The length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
