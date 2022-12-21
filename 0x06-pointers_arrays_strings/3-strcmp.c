#include "main.h"

/**
 * _strcmp - compares the length of two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to first string
 * Return: -1 if s1 < s2
 * 1 if s1 > s2
 * 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int size_s1, size_s2;

	/* to get length of s1 */
	for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
		;
	/* to get length of s1 */
	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
		;

	if (size_s1 < size_s2)
		return (-1);
	if (size_s1 > size_s2)
		return (1);
	if (size_s1 == size_s2)
		return (0);
	return (0);
}
