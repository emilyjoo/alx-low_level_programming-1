#include <stdio.h>

/**
 * main - prints all single digit codebers
 * of base 10 starting from 0
 * 
 * Description: the program makes use of
 * the only putchar function to print
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int i = 48;

	for(; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
