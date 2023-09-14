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

	while (i < strlen(string))
	{
		_putchar(string[i]);
	}
	return (0);
}
