/**
 * int_index - searches for an integer in an array
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: Index of the first matching element, or -1 if no match or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return -1;
	}

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return i;
		}
	}

	return -1;
}

