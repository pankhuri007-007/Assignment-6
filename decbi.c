#include <stdio.h>

int main()
{
    int n, rem, binary = 0, place = 1;

    printf("Enter a positive decimal number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}