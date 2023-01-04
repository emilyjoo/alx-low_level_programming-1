#include "main.h"

/**
 * is_palindrome - checks if s is a palindrome
 *
 * @s: pointer to char
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int i, size, check;

	for (i = 0; s[i] != '\0'; i++)
		;
	size = i;
	if (size == 0)
		return (1);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s[size - 1])
		{
			check = 1;
			size--;
		}
		else
		{
			check = 0;
			break;
		}
	}
	if (check == 1)
		return (1);
	return (0);
}
