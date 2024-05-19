// PSAP lab 2 (6th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Take two numbers as input from the user, Take Operator from the user (character input), and perform the respective operation and print the result

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Enter '+' for addition\nEnter '-' for subtraction \nEnter '*' for multiplication \nEnter '/' for division \nEnter '%%' for modulo\n");
    char x;
    scanf(" %c", &x);
    int ans;
    if (x == '+')
    {
        printf("%d", a + b);
    }
    else if (x == '-')
    {
        ans = a - b;
        printf("The integer difference is %d", ans);
        if (ans < 0)
            ans *= -1;
        printf("The absolute difference is %d", ans);
    }
    else if (x == '*')
    {
        printf("%d", a * b);
    }
    else if (x == '/')
    {
        if (b == 0)
            printf("division by 0 not possible");
        else
            printf("%d", a / b);
    }
    else if (x == '%')
    {
        printf("%d", a % b);
    }
}

// Sample input and Output
// Input

// case 1
// 5 6
// +
// 11

// case 2
// 5 6
// -
// The integer difference is -1
// The absolute difference is 1

// case 3
// 5 6
// *
// 30

// case 4
// 10 5
// /
// 2
