#include "main.h"

/**
 * leet - encodes a string into 1337
 * Letters a and A are replaced by 4
 * Letters e and E are replaced by 3
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 *
 * @s: pointer to string
 * Return: returns pointer to string
 */
char *leet(char *s)
{
	int i, j;

	char *letters = "AEOTL";
	char *code = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if ((s[i] == letters[j]) || (s[i] == letters[j] + 32))
			{
				s[i] = code[j];
				break;
			}
		}
	}
	return (s);
}
