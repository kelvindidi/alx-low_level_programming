#include <string.h>
#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: string to be appended to
* @src: string to be appended to dest
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return(dest);
} 
