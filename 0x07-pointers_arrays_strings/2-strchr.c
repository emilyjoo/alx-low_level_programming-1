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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s); /* at this point, the value of s is '\0' */
	return (0);
}
