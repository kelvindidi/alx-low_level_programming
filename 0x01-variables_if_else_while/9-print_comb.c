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
		putchar(i);
		if (i < 57)
		{
			putchar(',');
		}
		putchar(i < 57 ? ' ' : 10);
	}
	return (0);
}
