#include "main.h"

unsigned long int to_int(char *s)
{
	int i = 0;
	unsigned long int number = 0;

	for(; s[i] != '\0'; i++)
		number = (number * 10) + (s[i] - '0');
	return (number);
}

void to_string(char *r, unsigned long int result)
{
	int i, rem, len = 0;
	unsigned long int n = result;

	while (n != 0)
	{
		n /= 10;
		++len;
	}

	for (i = 0; i < len; i++)
	{
		rem = result % 10;
		result /= 10;
		r[len - (i + 1)] = rem + '0';
	}
	r[len] = '\0';
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	unsigned long int num1 = to_int(n1);
	unsigned long int num2 = to_int(n2);
	unsigned long int result = num1 + num2;

	to_string(r, result);

	for (; r[i] != '\0'; ++i)
		;
	if (i + 1 > size_r)
		return (0);
	else
		return (r);
}
