/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string to calculate the length of.
 *
 * Return: The length of the string (number of characters).
 *
 * Description: This function recursively calculates the length of a string
 * by counting the characters until it reaches the null terminator '\0'.
 * It returns the length as an integer value.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return 1 + _strlen_recursion(s + 1);
}
