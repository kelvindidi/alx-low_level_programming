#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: integer aray to be reversed
 * @n: number of array that will be reversed
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < 0; i++, n--)
	{
		int rev = a[n - 1];

		a[i] = rev;
	}
}
