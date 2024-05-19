// PSAP lab 8B (19 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: add two numbers using pointers

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a, b, *num1, *num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    num1 = &a;
    num2 = &b;
    printf("%d", *num1 + *num2);
}

// output 1
//  Enter the two numbers: 10 15
//  25

// output 2
//  Enter the two numbers: -10 50
//  40