#include "main.h"

/**
 * _isalpha - checks for alphbetic character (lowercase or uppercase)
 *
 * @c: character to be checked
 * Return: 1 if a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
