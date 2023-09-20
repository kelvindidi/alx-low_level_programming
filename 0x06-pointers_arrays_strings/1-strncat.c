#include <string.h>
#include "main.h"

/**
* _strncat - concats n number of src to dest
* @dest: pointer to string that will be appended
* @src: pointer to string that will receive dest
* @n: number of src to be appended
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
