#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, otherwise, any other number
*/
int main(int argc, char **argv)
{
	int num1, num2;
	char *op;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* if a user tries to divide by 0 */
	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	fptr = get_op_func(op);
	if (fptr != NULL)
		printf("%d\n", fptr(num1, num2));

	return (0);
}
