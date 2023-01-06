#include "main.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: pointer to string
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
