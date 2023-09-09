#include <stdio.h>
/*
* mian - this is the main function
* Return:0
*/
int main(void)
{
	char lowerCase;
	lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'q' || lowerCase == 'e')
		{
			lowerCase++;
			continue;
		}
		putchar(lowerCase);
		lowerCase++;
	}
	putchar(10);
	return (0);
}
