#include "main.h"

/**
 * _strlen_recursion - computes the length of a string
 *
 * @s: pointer to char
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
