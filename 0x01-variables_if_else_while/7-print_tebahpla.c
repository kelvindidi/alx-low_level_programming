#include <stdio.h>
/**
* main - this is the main function
* Return: 0
*/
int main(void)
{
	char lowerAlpha;

	lowerAlpha = 'z';
	while (lowerAlpha >= 'a')
	{
		putchar(lowerAlpha);
		lowerAlpha--;
	}
	putchar(10);
	return (0);
}
