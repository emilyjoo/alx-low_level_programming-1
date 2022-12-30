#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: pointer to array of characters
 * Return: pointer to array of encoded characters
 */
char *rot13(char *s)
{
	int i, j;
	char *letters1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *letters2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters1[j] != '\0'; j++)
		{
			if (s[i] == letters1[j])
			{
				s[i] = letters2[j];
				break;
			}
		}
	}
	return (s);
}
