#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: pointer to char
 */
void _print_rev_recursion(char *s)
{
	int i = 0, size;

	for (; s[i] != '\0'; i++)
		;
	size = i;
	for (i = size - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\0');
}
