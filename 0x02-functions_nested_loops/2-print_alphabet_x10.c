#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets (10 times)
 * in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;

	for (; count < 10; count++)
	{
		int i = 'a';

		for (; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
