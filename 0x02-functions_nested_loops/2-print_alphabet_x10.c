#include "main.h"
/**
* print_alphabet - this is the main function
* Return: void
*/
void print_alphabet(void)
{
	int a;
	int i = 0;
	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		        _putchar(a);
		}
	}
	 _putchar('\n');
}
