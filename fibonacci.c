#include <stdio.h>

int main()
{
    int a = 1, b = 1, c, n, count = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d\n%d\n", a, b);

        while (count < n)
        {
            c = a + b;
            printf("%d\n", c);

            a = b;
            b = c;
            count++;
        }
    }
    printf("Samaira Jain S2-46");
    return 0;
}