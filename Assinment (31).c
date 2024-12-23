#include <stdio.h>

int main() {
    int days, years, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 360;
    days = days % 360;
    months = days / 30;
    remaining_days = days % 30;

    printf("%d years %d months %d days\n", years, months, remaining_days);

    return 0;
}

