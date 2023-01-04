#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: pointer to char
 */
void _puts_recursion(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
