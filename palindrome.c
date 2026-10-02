#include <stdio.h>
int main()
{
    int a,b,c,i;
    printf("This program is for checking whether the number is palindrome or not\n");
    printf("Enter the number: ");
    scanf("%d",&a);
    c=a;
    b=0;
    for(i=1; a!=0; i++)
    {
        b=b*10+a%10;
        a=a/10;
    }
    if(b==c)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    printf("Samaira Jain S2-46");
    return 0;
}
