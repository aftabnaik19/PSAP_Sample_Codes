// PSAP lab 5D (27th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Given an array of n-1, there will be all elements from 1 to n except one, find the missing element
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n, var;
    long long sum = 0;
    printf("Enter the number of elements in array:");
    scanf(" %d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n - 1; i++)
    {
        scanf(" %d", &var);
        sum += var;
    }

    long long total = (n * (n + 1)) / 2;

    printf("The missing element is: %ld", total - sum);

    return 0;
}

// Output of above code
// Case 1
// Enter the number of elements in array:5
// Enter the elements of array: 1 2 3 5
// The missing element is: 4

// Case 2
// Enter the number of elements in array:7
// Enter the elements of array: 1 2 4 3 7 6
// The missing element is: 5