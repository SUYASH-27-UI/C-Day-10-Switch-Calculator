#include <stdio.h>

int main()
{
    int choice;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Answer = %d", a + b);
            break;

        case 2:
            printf("Answer = %d", a - b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
