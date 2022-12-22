#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @c: pointer to string
 * Return: pointer to string
 */
char *cap_string(char *c)
{
	int i;
	char *seperator = "\t\n ,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (; seperator[i] != '\0'; i++)
		{
			if (c[i] == seperator[i])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
					;
			}
		}
	}
	return (c);
}
