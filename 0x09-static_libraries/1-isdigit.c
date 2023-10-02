#include "main.h"

/**
 * _isdigit - Check if a character is a digit.
 * @c: The character to check.
 *
 * Description: This function returns 1 if 'c' is a digit ('0' to '9'),
 *              otherwise, it returns 0.
 *
 * Return: 1 if 'c' is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
