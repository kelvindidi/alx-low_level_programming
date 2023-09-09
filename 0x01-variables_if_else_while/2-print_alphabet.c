#include <stdio.h>
/**
* main - main function starts here
* Return:0
*/
int main(void)
{
	char alphabets[] = "abcdefghijkklmnopqrstuvwxyz";
	int i;

	for (i =  0; i < 26; i++)
	{
		putchar(alphabets[i]);
		/*putchar(10);*/
	}
	return (0);
}
