#include <stdio.h>

void DaysToYears(int days, int *year, int *week, int *day) {
    *year = days / 365;
    *week = (days % 365) / 7;
    *day = days - ((*year * 365) + (*week * 7));
}

int main() {
    int days = 1329;
    int year, week, day;

    DaysToYears(days, &year, &week, &day);

    printf("Years: %d\nWeeks: %d\nDays: %d\n", year, week, day);
    return 0;
}
