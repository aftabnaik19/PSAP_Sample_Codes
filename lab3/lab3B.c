// PSAP lab 3b (13th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Take a year as an input from the user and print whether it is a leap year or not

#include <stdio.h>

int main()
{
    int year;
    printf("Please enter the Year: ");
    scanf(" %d", &year);
    if (year % 4 == 0)
    {
        if (year % 400 == 0)
        {
            printf("%d is not a leap year", year);
        }
        else
        {
            printf("%d is a leap Year", year);
        }
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}

// Input and output of above code
// Case 1
// Please enter the Year: 400
// 400 is not a leap year

// Case 2
// Please enter the Year: 564
// 564 is a leap Year