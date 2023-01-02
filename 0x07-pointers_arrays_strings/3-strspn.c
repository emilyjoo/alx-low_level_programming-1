#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j, check = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
			}
			else
			{
				continue;
				check = 2;
			}
		}
		if (check == 2)
			break;
	}
	return (count);
}
