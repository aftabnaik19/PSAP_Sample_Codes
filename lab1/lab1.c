// PSAP lab 1 (6th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Take 5 numbers as input from the users, print their average and based on the average out of 100, print their grade

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    printf("Please enter the marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    int average = m1 + m2 + m3 + m4 + m5;
    average /= 5;
    printf("The average is: %d \n", average);
    if (average >= 90)
    {
        printf("Your grade is A");
    }
    else if (average >= 80)
    {
        printf("Your grade is B");
    }
    else if (average >= 70)
    {
        printf("Your grade is C");
    }
    else
    {
        printf("Your grade is D");
    }
    return 0;
}

// Input and output of above code

// case 1
//  Please enter the marks for 5 subjects: 89 65 45 84 12 65
//  The average is: 59
//  Your grade is D

// case 2
//  Please enter the marks for 5 subjects: 90 98 95 96 98 97
//  The average is: 95
//  Your grade is A