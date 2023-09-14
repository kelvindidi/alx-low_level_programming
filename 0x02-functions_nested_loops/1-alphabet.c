#include "main.h"
/**
* main - this is the main function
* Return: 0
*/
void print_alphabets(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(string[i]);
		i++;
	}
}
