#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
