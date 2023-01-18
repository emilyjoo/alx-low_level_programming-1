#include "function_pointers.h"

/**
 * op_add - performs addition
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of two integers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of two integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the multiplication of two integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of two integers
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs modulo operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: modulo of two integers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
