#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 90) {
        printf("Excellent, Grade: A\n");
    } else if (marks >= 60 && marks < 80) {
        printf("Grade: B\n");
    } else if (marks >= 40 && marks < 60) {
        printf("Grade: C\n");
    } else if (marks < 40) {
        printf("Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }
    printf("Samaira Jain S2-46");

    return 0;
}