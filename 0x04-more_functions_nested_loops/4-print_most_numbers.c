#include "main.h"
/**
* print_numbers - prints 0 - 9
*/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num);
	}
	_putchar('\n');
}
