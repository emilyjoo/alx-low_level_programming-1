#include <stdio.h>

/**
 * main -  prints all possible combinations
 * of single-digit numbers
 *
 * Return: returns 0 if successful
 */
int main(void)
{
    int i = 48;

    for(; i <= 57; i++)
    {
        putchar(i);
        if (i < 57)
            {
                putchar(',');
                putchar(' ');
            }
    }

    putchar('\n');

    return (0);
}
