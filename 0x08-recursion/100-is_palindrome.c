#include "main.h"
#include <string.h>

/**
* check - uses recursion to check for palindrome
*
* @s: pointer to char (string to be checked)
* @length: length of string
* Return: 1 if s is a palindrome, otherwise 0
*/
int check(char *s, int length)
{
	if (length == 0 || length == 1)
		return (1);
	if (s[0] == s[length - 1])
	{
		length--;
		return (check(s + 1, length - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if s is a palindrome
 *
 * @s: pointer to char
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = 0;

	length = strlen(s);
	if (check(s, length) == 0)
		return (0);
	return (1);
}
