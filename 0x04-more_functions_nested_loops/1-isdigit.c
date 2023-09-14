#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if c is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
