#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j, k, m;

	i = '0';
	for (; i <= '2'; i++)
	{
		j = '0';
		for (; j <= '9'; j++)
		{
			if (i == '2' && j > '3')
			{
				if (k > '5' && m > '9')
					break;
			}
			k = '0';
			for (; k <= '5'; k++)
			{
				m = '0';
				for (; m <= '9'; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
