#include "main.h"
#include <stdio.h>

/**
* print_array - a function that prints n elements of an
* array of integers, followed by a new line.
* @n: is the number of elements of the array to be printed
* @a: is the pointer to integer array
*/

void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		if (j < n - 1)
		{
			printf("%d, ", a[j]);
			j++;
		}
		else
		{
			printf("%d", a[j]);
			j++;
		}
	}
}
