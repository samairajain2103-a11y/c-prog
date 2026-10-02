#include <stdio.h>
int main()
{
    int a;
    int b;
    int choice;
    printf ("1. addition\n 2. subtraction\n 3. multiplication\n 4. division\n");
    printf ("Enter your choice: ");
    scanf ("%d", &choice);
    printf ("Enter first digit: ");
    scanf ("%d", &a);
    printf("Enter second digit: ");
    scanf ("%d", &b);

    switch (choice) {
        case 1:
            printf("The sum of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("The difference of %d and %d is %d\n", a, b, a - b);
            break;
        case 3:
            printf("The product of %d and %d is %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0) {
                printf("The quotient of %d and %d is %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    printf("Samaira Jain S2-46");
    return 0;

}