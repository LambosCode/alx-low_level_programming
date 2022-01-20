#include <stdio.h>
#include "holberton.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    printf("Enter Month: ");
    scanf("%d", &month);

    printf("Enter day: ");
    scanf("%d", &day);
    
    printf("Enter Year: ");
    scanf("%i", &year);

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

