// PSAP lab 4A ( 20 Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Check whether given number is armstrong number or not

#include <stdio.h>
// #include <math.h>
int pow(int a, int b)
{
    int val = 1;
    for (int i = 0; i < b; i++)
    {
        val *= a;
    }
    return val;
}
int main()
{

    int n;
    printf("Enter the number: ");
    scanf(" %d", &n);

    // printf("%d", n);
    int var = n;
    int sum = 0, digits = 0;
    while (var > 0)
    {
        var = var / 10;
        digits++;
    }
    var = n;
    while (var > 0)
    {

        sum = sum + pow(var % 10, digits);

        var = var / 10;
    }

    if (sum == n)
    {
        printf("%d is a Armstrong number", n);
    }
    else
    {
        printf("%d is not a Armstrong number", n);
    }
    return 0;
}

// Output of above code
// Case 1
// Enter the number: 153
// 153 is a Armstrong number

// Case 2
// Enter the number: 256
// 256 is not a Armstrong number