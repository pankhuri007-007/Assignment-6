#include <stdio.h>

int main()
{
    int x, n, i, j;
    double term, sum = 0;
    long long power, fact;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        /* Calculate x^i */
        power = 1;
        for (j = 1; j <= i; j++)
            power = power * x;

        /* Calculate i! */
        fact = 1;
        for (j = 1; j <= i; j++)
            fact = fact * j;

        term = (double)power / fact;

        if (i % 2 == 1)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("S = %.2lf", sum);

    return 0;
}