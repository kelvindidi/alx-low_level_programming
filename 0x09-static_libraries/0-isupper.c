#include "main.h"

/**
 * _isupper - Check if a character is uppercase.
 * @c: The character to check.
 *
 * Description: This function returns 1 if 'c'
 * is an uppercase letter ('A' to 'Z'),
 * otherwise, it returns 0.
 *
 * Return: 1 if 'c' is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
