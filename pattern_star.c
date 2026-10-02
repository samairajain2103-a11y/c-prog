#include <stdio.h>
int main()
{
    int i,j,n;
    printf("This program is for printing star pattern\n");
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Samaira Jain S2-46");
    return 0;
}