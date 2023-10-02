#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Description: This function compares the strings
 * 's1' and 's2' character by character.
 *
 * Return: 0 if 's1' is equal to 's2', a positive value if 's1' is greater,
 * and a negative value if 's2' is greater.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
