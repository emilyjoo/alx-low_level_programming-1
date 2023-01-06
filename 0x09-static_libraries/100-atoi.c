#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer to string
 * Return: 0 if no number in the string
 * otherwise return the number
 */
int _atoi(char *s)
{
	int index = 0;
	unsigned int number = 0;
	int mult = 1;
	int check = 0;

	while (s[index])
	{
		if (s[index] == '-')
			mult *= -1; /* to ensure @number ends up with the right sign */

		while (s[index] >= '0' && s[index] <= '9')
		{
			check = 1;
			number = (number * 10) + (s[index] - '0');
			index++;
		}
		if (check == 1)
			break; /* ensures digits coming after non-digits on aren't computed */
		index++;
	}
	number *= mult; /* computes final sign of @number, either +ve or -ve */
	return (number);
}
