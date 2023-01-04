#include "main.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: pointer to char (first string)
 * @s2: pointer to char (second string)
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int i, j, k, size1, size2;

	/* get length of each string */
	for (i = 0; s1[i] != '\0'; i++)
		;
	size1 = i;
	for (i = 0; s2[i] != '\0'; i++)
		;
	size2 = i;

	if (size1 == 0)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s2[j] == '*')
				return (1);
		}
	}
	if (size2 == 1)
	{
		if (s2[size2 - 1] == '*')
			return (1);
	}
	if ((s1[size1 - 1] == s2[size2 - 1]) || s2[size2 - 1] == '*')
	{
		if ((s1[size1 - 2] == s2[size2 - 2]) || s2[size2 - 2] == '*')
			return (1);
		if ((s1[size1 - 3] == s2[size2 - 3]) || s2[size2 - 3] == '*')
			return (1);
	}

	return (0);
}
