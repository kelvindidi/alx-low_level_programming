#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a given action on each element of an array
 * @array: The array to operate on
 * @size: The number of elements in the array
 * @action: A function pointer to the action to be performed on each element
 *
 * This function iterates through the elements of an integer array and applies
 * a specified action to each element. If either the array or action function
 * is NULL, it does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

