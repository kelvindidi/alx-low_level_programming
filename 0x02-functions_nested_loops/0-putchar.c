#include "main.h"
#include <string.h>
/**
* main - this is the main function
* Return: 0
*/
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (i < (int)strlen(string))
	{
		_putchar(string[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
