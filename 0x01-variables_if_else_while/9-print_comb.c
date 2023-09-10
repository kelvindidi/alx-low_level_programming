#include <stdio.h>
/**
* main - this is the main function
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i < 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
			putchar(10);
		}
		else
		{
			putchar(i);
			putchar(10);
		}
	}
	return (0);
}
