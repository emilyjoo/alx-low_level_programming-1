#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int str_len, index, temp;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
		;
	for (index = 0; index < str_len / 2; index++)
	{
		temp = s[index]; /* temporarily hold the value at that index */
		s[index] = s[str_len - index - 1];
		s[str_len - index - 1] = temp;
	}
}
