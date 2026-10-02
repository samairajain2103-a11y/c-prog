#include <stdio.h>

int main()
{
    float a, r, sum = 0, term;
    int n, i;

    printf("Enter first term: ");
    scanf("%f", &a);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter common ratio: ");
    scanf("%f", &r);

    term = a;

    for (i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term * r;
    }

    printf("Sum of geometric series = %f\n", sum);
    printf("Samaira Jain S2-46");
    return 0;
}
