#include "main.h"
/**
* swap_int - swaps the values a and b are pointing to
* @a: first pointer
* @b: second pointer
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = *c;
}
