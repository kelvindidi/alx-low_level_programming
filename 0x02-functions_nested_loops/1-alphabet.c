#include "main.h"
/**
* print_alphabet - this is the main function
* Return: void
*/
void print_alphabet(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(string[i]);
		i++;
	}
}
