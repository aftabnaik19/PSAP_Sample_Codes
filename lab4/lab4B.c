// PSAP lab 4B ( 20 Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Find the sum of first n terms of harmonic series

#include <stdio.h>
// #include <math.h>

int main()
{

    int n;
    printf("Enter the number: ");
    scanf(" %d", &n);
    double ans = 0;
    for (float i = 1; i <= n; i++)
    {
        /* code */
        ans += (1.0 / i);
        // printf("%f\n", 1 / i);
    }
    printf("The sum of first %d terms of harmonic series is %.03f", n, ans);
}

// Output of above code
// Case 1
// Enter the number: 20
// The sum of first 20 terms of harmonic series is 3.598

// Case 2
// Enter the number: 5
// The sum of first 5 terms of harmonic series is 2.28