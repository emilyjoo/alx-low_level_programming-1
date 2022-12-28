#include "main.h"
#include <stdlib.h>

/**
 * to_string - convert array of integers to string
 *
 * @arr: array of integers
 * @size: size of int array
 * Return: pointer to string
 */
char *to_string(int *arr, int size)
{
	int i;
	char *new_arr;

	new_arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		new_arr[i] = arr[i] + '0';
	new_arr[i] = '\0';
	free(arr);
	return (new_arr);
}

/**
 * compute - converts string of numbers to int array and adds them
 *
 * @n1: pointer to first string of numbers
 * @n2: pointer to second string of numbers
 * @size_of_n1: size of first string
 * @size_of_n2: size of second string
 * Return: pointer to int array
 */
int *compute(char *n1, char *n2, int size_of_n1, int size_of_n2)
{
	int i, j, carry = 0, sum = 0;
	int *a, *b, *keep;

	a = malloc(sizeof(int) * size_of_n1);
	b = malloc(sizeof(int) * size_of_n2);
	keep = malloc(sizeof(int) * size_of_n1);

	for (i = 0; n1[i] != '\0'; i++)
		a[i] = a[i] * 10 + (n1[i] - 48);
	for (j = 0; n2[j] != '\0'; j++)
		b[j] = b[j] * 10 + (n2[j] - 48);

	for (i = size_of_n2 - 1; i >= 0; i--)
	{
		sum = a[size_of_n1 - 1] + b[i] + carry;
		keep[size_of_n1] = sum % 10;
		carry = sum / 10;
		size_of_n1--;
	}

	for (; size_of_n1 > 0; size_of_n1--)
	{
		sum = a[size_of_n1 - 1] + carry;
		keep[size_of_n1] = sum % 10;
		carry = sum / 10;
	}

	keep[size_of_n1] = carry;
	free(a);
	free(b);
	return (keep);
}



/**
 * infinite_add - adds two numbers
 *
 * @n1: pointer to first string of numbers
 * @n2: pointer to second string of numbers
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, size_of_n1, size_of_n2;

	/* to get size of n1 */
	for (i = 0; n1[i] != '\0'; i++)
		;
	size_of_n1 = i + 1;

	/* to get size of n2 */
	for (j = 0; n2[j] != '\0'; j++)
		;
	size_of_n2 = j + 1;

	if (size_of_n1 >= size_of_n2)
		r = to_string(compute(n1, n2, size_of_n1, size_of_n2), size_of_n1);
	else
		r = to_string(compute(n2, n1, size_of_n2, size_of_n1), size_of_n2);

	for (i = 0; r[i] != '\0'; i++)
		;
	if (i + 1 >= size_r)
		return (0);

	return (r);
}
