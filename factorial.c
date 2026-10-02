#include <stdio.h>
int main()
{
    int a;
    int b;
    int i;
    printf ("This program is for factorial\n");
    printf ("Enter the desired number: ");
    scanf ("%d",&a);
    if (a<0)
    {
        printf ("Error: Factorial of negative numbers is not defined.\n");
    }
    else if (a==0)
    {
        printf ("The factorial of 0 is 1\n");
    }
    else
    { b = 1;
    for (i=1;i<=a;i++)
        b=b*i;
    printf ("The factorial of %d is %d\n",a,b);
    }
    printf ("Samaira Jain S2-46");
    return 0;
}