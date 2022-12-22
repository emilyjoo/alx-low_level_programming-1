#include "main.h"

/**
 * _strcmp - compares the length of two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to first string
 * Return: -15 if s1 < s2
 * 15 if s1 > s2
 * 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int size_s1, size_s2, i;

	/* to get length of s1 */
	for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
		;
	/* to get length of s1 */
	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
		;

	if (size_s1 < size_s2)
		return (-15);
	else if (size_s1 > size_s2)
		return (15);
	else if (size_s1 == size_s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s1[i] < s2[i])
				return (-15);
			else if (s1[i] > s2[i])
				return (15);
		}
	}
	return (0);
}
