#include <stdio.h>
int main() {
    int day, month, year;
    printf("Enter a date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if ( year % 4 == 0 && year % 100 != 0) {
        printf("%d is a leap year.\n", year);
    }else if (year % 400 == 0) {
        printf ("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    printf("Samaira Jain S2-46");
    return 0;
}