#include "main.h"

/**
 * size - computes length of string
 *
 * @s: pointer to string
 * Return: lenth of string
 */
int size(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

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
	int size_s1 = size(s1), size_s2 = size(s2), i;

	if (size_s1 < size_s2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] < s2[i])
				return (-15);
			else if (s1[i] > s2[i])
				return (15);
			else
				return (-15);
		}
	}
	else if (size_s1 > size_s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s1[i] < s2[i])
				return (-15);
			else if (s1[i] > s2[i])
				return (15);
			else
				return (15);
		}
	}
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
