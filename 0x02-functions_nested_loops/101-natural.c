#include "main.h"
#include <stdio.h>

/**
 * natural - computes and prints the sum
 * of all the multiples of 3 or 5 below
 *
 * @n: number to be computed
 */
void natural(int n)
{
    int i = 0;
    int sum = 0;

    for (; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
    natural(1024);
    return (0);
}
