#include "main.h"
/**
* main - this is the main function
* Return: 0
*/
int main(void)
{
	void print_alphabets(void)
	{
		char string[] = "abcdefghijklmnopqrstuvwxyz";
		int i = 'a';

		while (i <= 'z')
		{
			_putchar(string[i]);
			i++;
		}
		_putchar(10);
	}
	return (0);
}
