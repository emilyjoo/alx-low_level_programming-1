#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything depending  on the argument type
 *
 * @format: list of argument type
*/
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, check;
	char *temp;

	va_start(args, format);

	while (format[i])
	{
		check = 0;
		switch (format[i])
		{
		case 'c':
			/* (char) to prevent char from promoting to int */
			printf("%c", (char)va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			/* (float) to prevent float from promoting to double */
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			temp = va_arg(args, char *);
			if (temp)
				printf("%s", temp);
			else
				printf("(nil)"); /* if argument is NULL */
			break;
		default:
			check = 1;
		}
		if (format[i + 1] && check != 1)
			printf("%s", ", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
