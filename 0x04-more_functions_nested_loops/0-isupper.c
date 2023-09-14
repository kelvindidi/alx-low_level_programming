#include "main.h"
#include <ctype.h>
/**
* _isupper - this checks if c is uppercase
* @c: the character to check
*
* Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
