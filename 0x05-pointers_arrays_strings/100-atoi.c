#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
			printf("-");
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	if (num == 0)
		return (0);
	else
		return (num);
}
