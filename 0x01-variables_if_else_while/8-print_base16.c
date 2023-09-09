#include <stdio.h>
/**
* main - this is the main function
* Return: 0
*/
int main(void)
{
	int i;
	int a;

	for (i = 0, a = 48; i < 16; i++)
	{
		if (i < 10)
		/* print character value of 48-57 (that is 0-9 in int) */
		{
			while (a < 58)
			{
				putchar(a);
				a++;
			}
		}
		else
		/* print  a-f */
		{
			putchar(i + 87);
		}
	}
	/* add newline*/
	putchar(10);
	return (0);
}
