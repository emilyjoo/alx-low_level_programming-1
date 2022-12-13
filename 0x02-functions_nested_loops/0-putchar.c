#include "main.h"

/**
 * main - prints a string
 *
 * Return: On success 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i, count;

	i = count = 0;
	for (; word[count] != '\0'; count++) /* Get length of string */

	for (; i <= count; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
