#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to string to locate
 * @needle: pointer to string to be located
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, size, check = 0;

	for (i = 0; needle[i] != '\0'; i++)
		;
	size = i;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[k] == needle[j])
			{
				check++;
				k++;
			}
			else
				break;
		}
		if (check == size)
			return (haystack + i);
	}
	return (0);
}
