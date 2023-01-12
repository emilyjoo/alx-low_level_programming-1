#include "main.h"

/**
 * str_len - computes the length of a string
 * Unlike the strlen() in C, this one inludes the null terminator
 * for the purpose it serves in this code.
 *
 * @str: string
 * Return: length of the string
*/
size_t str_len(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	i++; /* include null terminator */
	return (i);
}


/**
 * string_nconcat - concatenates two strings
 * If n is greater or equal to the length of s2 then
 * it concatenates the entire string s2. Else, it concatenates only
 * n bytes of s2
 *
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be appended
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, len_s1, len_s2;
	char *ptr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);

	/* allocate memory enough for the number of bytes in s1 and n bytes */
	ptr = malloc(sizeof(char) * len_s1 + n);
	if (!ptr)
		return (NULL);

	/* copy s1 to ptr */
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	ptr[i] = '\0';

	if (len_s2 > n)
	{
		/* overwrite and begin from the terminating */
		/* null byte to append n bytes of s2 */
		for (j = 0; j < n && s2[j] != '\0'; j++)
			ptr[i + j] = s2[j];
		ptr[i + j] = '\0';
	}
	else if (n >= len_s2)
	{
		/* overwrite and begin from the terminating */
		/* null byte to append all of s2 */
		for (j = 0; s2[j] != '\0'; j++)
			ptr[i + j] = s2[j];
		ptr[i + j] = '\0';
	}

	return (ptr);
}
