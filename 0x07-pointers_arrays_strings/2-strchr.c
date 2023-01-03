#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string
 * @c: character to be located
 * Return: pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	int i = 0, size;

	for (i = 0; s[i] != '\0'; i++)
		;
	size = i + 1; /* to include terminating null byte */
	for (; s[i] <= size; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
