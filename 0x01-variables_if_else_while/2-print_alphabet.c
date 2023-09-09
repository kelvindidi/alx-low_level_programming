#include <stdio.h>
#include <string.h>
/**
* main - main function starts here
* Return:0
*/
int main(void)
{
	char alphabets[] = "abcdefghijkklmnopqrstuvwxyz";
	int i;

	for (i =  0; i < strlen(alphabets); i++)
	{
		putchar(alphabets[i]);
		putchar(10);
	}
	return (0);
}
