#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int i, index;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (index = i; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
