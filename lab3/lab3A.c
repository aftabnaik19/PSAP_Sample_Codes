// PSAP lab 3 (13th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Take 5 numbers as input from the users, print their average and based on the average out of 100, print their grade using switch case only

#include <stdio.h>

char giveGrade(int average)
{

    switch (average)
    {
    case 90 ... 100:
        return 'A';
        break;
    case 80 ... 89:
        return 'B';
        break;
    case 70 ... 79:
        return 'C';
        break;
    case 60 ... 69:
        return 'D';
        break;
    case 0 ... 59:
        return 'F';
        break;

    default:
        break;
    }
}
int main()
{
    int m1, m2, m3, m4, m5;
    printf("Please enter the marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    int average = m1 + m2 + m3 + m4 + m5;
    average /= 5;
    char grade = giveGrade(average);
    printf("The average is: %d \n", average);
    printf("Your grade is: %c", grade);
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