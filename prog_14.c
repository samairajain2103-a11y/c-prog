#include <stdio.h>
int main()
{
    int i,j,n,m,a;
    printf("This program is for printing star pattern using switch case\n");
    printf("1. star pattern 2. even pattern 3. odd pattern\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    a=m*2;

    switch(n)
        {
            case 1:
                for (i=1;i<=m;i++){
                    for (j=1;j<=i;j++){
                        printf("*");}
                    printf("\n");}
                    break;
            case 2:
                for (i=2;i<=m;i++){
                    for (j=1;j<=i;j++){
                        if (j%2==0);
                            printf("*");
                        else;
                            printf(" ");
                    printf("\n");}
                    }
                    break;
            case 3:
                for (i=1;i<=m;i++){
                    for (j=1;j<=i;j++){
                        if(j%2!=0)
                            printf("*");
                        else
                        printf(" ");}
                    printf("\n");
                }
                    
                    break;
            default:
                printf("invalid choice");
        }
    
    printf("Samaira Jain S2-46");
    return 0;
}