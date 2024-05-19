#include <stdlib.h>
#include <stdio.h>
// PSAP lab 8A (19 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Add 45 days to a given date
/*
1 31
2 28/29
3 31
4 30
5 31
6 30
7 31
8 31
9 30
10 31
11 30
12 31

*/

struct date
{
    int date;
    int month;
    int year;
} input, output;

int leapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 400 == 0)
        {
            // printf("%d is not a leap year", year);
            return 0;
        }
        else
        {
            // printf("%d is a leap Year", year);
            return 1;
        }
    }
    else
    {
        // printf("%d is not a leap year", year);
        return 0;
    }
    // return 1;
}
int main()
{
    int months_dates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Enter the date in dd mm yyyy format \n");
    scanf(" %d %d %d", &input.date, &input.month, &input.year);
    if (leapYear(input.year))
    {
        months_dates[1] = 29;
    }
    input.date = input.date + 45;
    while (input.date > months_dates[input.month - 1])
    {
        input.date -= months_dates[input.month - 1];
        input.month++;
        if (input.month > 12)
        {
            input.month = 1;
            input.year++;
        }
    }
    printf("Date after 45 days will be %d %d %d", input.date, input.month, input.year);

    return 0;
}

// output 1
// Enter the date in dd mm yyyy format
// 14 04 2004
// Date after 45 days will be 29 5 2004

// output 2
// Enter the date in dd mm yyyy format
// 19 12 2004
// Date after 45 days will be 2 2 2005