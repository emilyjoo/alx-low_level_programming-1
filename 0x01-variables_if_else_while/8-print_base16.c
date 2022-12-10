#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase
 *
 * Description: the program uses only
 * the putchar function to print
 *
 * Return: returns 0 if successful.
 *
 */
int main(void)
{
	int i = 48;
	int j = 97;

	for (; i <= 57; i++)
		putchar(i);
	for (; j <= 102; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
