#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @c: pointer to string
 * Return: pointer to string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	}
	return (c);
}
