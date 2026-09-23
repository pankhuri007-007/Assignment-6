#include <stdio.h>

int main()
{
    int choice, n, temp, rev, digit, sum, count;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);

                temp = n;
                rev = 0;

                while (temp > 0)
                {
                    digit = temp % 10;
                    rev = rev * 10 + digit;
                    temp = temp / 10;
                }

                if (n == rev)
                    printf("Palindrome Number\n");
                else
                    printf("Not a Palindrome Number\n");
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while (temp > 0)
                {
                    digit = temp % 10;
                    sum = sum + digit * digit * digit;
                    temp = temp / 10;
                }

                if (sum == n)
                    printf("Armstrong Number\n");
                else
                    printf("Not an Armstrong Number\n");
                break;

            case 3:
                printf("Enter number: ");
                scanf("%d", &n);

                count = 0;

                for (int i = 1; i <= n; i++)
                {
                    if (n % i == 0)
                        count++;
                }

                if (count == 2)
                    printf("Prime Number\n");
                else
                    printf("Not a Prime Number\n");
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &n);

                sum = 0;

                while (n > 0)
                {
                    digit = n % 10;
                    sum = sum + digit;
                    n = n / 10;
                }

                printf("Sum of digits = %d\n", sum);
                break;

            case 5:
                printf("Enter number: ");
                scanf("%d", &n);

                count = 0;

                while (n > 0)
                {
                    count++;
                    n = n / 10;
                }

                printf("Number of digits = %d\n", count);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}