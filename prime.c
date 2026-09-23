#include <stdio.h>

int main()
{
    int lower, upper, i, j, count, total = 0;

    printf("Enter lower and upper limit: ");
    scanf("%d %d", &lower, &upper);

    for (i = lower; i <= upper; i++)
    {
        count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
        {
            printf("%d ", i);
            total++;
        }
    }

    printf("\nTotal prime numbers = %d", total);

    return 0;
}