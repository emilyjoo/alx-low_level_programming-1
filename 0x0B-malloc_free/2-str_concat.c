#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory which contains
 * content of s1 and s2 and endss with a null char, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
	size_t size_s1 = 0, size_s2 = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get size of s1 */
	for (; s1[size_s1] != '\0'; size_s1++)
		;
	/* get size of s2 */
	for (; s2[size_s2] != '\0'; size_s2++)
		;
	/* newly allocated space should be large enough to */
	/* contain characters in both s1 and s2 and end with a null char */
	ptr = malloc(sizeof(char) * (size_s1 + size_s2 + 1)); /* 1 for null char */
	if (!ptr)
		return (NULL);

	for (; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
