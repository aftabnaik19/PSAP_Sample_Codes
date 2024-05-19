// PSAP lab 4C ( 20 Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: A program to round of an integer to the next largest multiple of another integer

#include <stdio.h>
// #include <math.h>

int main()
{

    int n, target;
    printf("Enter the numbers: ");
    scanf(" %d %d", &n, &target);
    if (target == 0)
    {
        printf("NOT Possible");
        return 0;
    }
    // printf("%d", n);
    int var = 0;
    while (n > var)
    {
        var += target;
    }
    printf("%d", var);
    return 0;
}

// Output of above code
// Case 1
// Enter the numbers: 7 5
// 10

// Case 2
// Enter the number: 5 0
// NOT Possible