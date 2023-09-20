#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies a string into another string
 * @src: string to be copied
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
