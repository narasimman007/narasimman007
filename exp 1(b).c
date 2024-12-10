#include <stdio.h>

int main() {
    int days, years, weeks, remaining_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    remaining_days = days % 7;
    printf("%d days is approximately %d years, %d weeks, and %d days.\n", days, years, weeks, remaining_days);

    return 0;
}
