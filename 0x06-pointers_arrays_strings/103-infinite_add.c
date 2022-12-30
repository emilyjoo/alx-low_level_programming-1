#include "main.h"

/**
 * compute - adds two numbers (in string)
 * and stores result in a char array
 * @a: pointer to first array of numbers
 * @i: length of @a
 * @b: pointer to second array of numbers
 * @j: length of @b
 * @r: pointer to char array where result is to be stored
 * Return: pointer to char array where result is to be stored
 */
char *compute(char *a, int i, char *b, int j, char *r)
{
	int sum = 0, carry = 0;

	r[i + 1] = '\0';
	for (j -= 1, i -= 1; j >= 0; j--, i--)
	{
		sum = (b[j] - '0') + (a[i] - '0') + carry;
		r[i + 1] = (sum % 10) + '0';
		carry = sum / 10;
	}
	/* prevent overflow */
	if (carry == 0)
		return (r + 1);
	if (carry > 0)
		for (; i >= 0; i--)
		{
			sum = (a[i] - '0') + carry;
			r[i + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}
	r[i + 1] = carry + '0';
	return (r);
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	/* get length of string n1 */
	for (i = 0; n1[i] != '\0'; i++)
		;
	/* get length of string n2 */
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i + 1 >= size_r || j + 1 >= size_r)
		return (0);
	if (i >= j)
		r = compute(n1, i, n2, j, r);
	else
		r = compute(n2, j, n1, i, r);
	return (r);
}
