#include "main.h"

/**
 * cap_string - capitalizes first letter of each word
 *
 * @c: pointer to string
 * Return: pointer to string
 */
char *cap_string(char *c)
{
	int i, j;
	char *seperator = " \t\n,;.!?\"(){}";

	if (c[0] >= 97 && c[0] <= 122)
		c[0] -= 32;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; seperator[j] != '\0'; j++)
		{
			if (c[i] == seperator[j] && (c[i + 1] >= 97 && c[i + 1] <= 122))
			{
				c[i + 1] -= 32;
				break;
			}
		}
	}
	return (c);
}
