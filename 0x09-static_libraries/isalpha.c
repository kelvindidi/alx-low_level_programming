#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic character.
 * @c: The character to check.
 *
 * Description: This function returns 1 if 'c' is an
 * alphabetic character ('a' to 'z' or 'A' to 'Z'),
 *              otherwise, it returns 0.
 *
 * Return: 1 if 'c' is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
