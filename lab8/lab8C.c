// PSAP lab 8B (19 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: case 1 find fibonacci case 2 find factorial using call by value functions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fibonacci(int n, int arr[])
{
    if (arr[n] != -1)
    {
        return arr[n];
    }
    else
    {
        arr[n] = fibonacci(n - 1, arr) + fibonacci(n - 2, arr);

        return arr[n];
    }
}
int factorial(int n)
{
    return n * (n - 1);
}
int main()
{
    int n;
    scanf(" %d", &n);
    int arr[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = -1;
    }

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    // printf("%d", n);
    printf("The first %d terms of Fibonacci Series are:\n", n);
    fibonacci(n, arr);
    for (int i = 1; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe factorial of %d is: %d", n, factorial(n));
    // factorial(n);
}

// output 1
// 5
// The first 5 terms of Fibonacci Series are:
// 1 2 3 5 8
// The factorial of 5 is: 20

// output 2
// 10
// The first 10 terms of Fibonacci Series are:
// 1 2 3 5 8 13 21 34 55 89
// The factorial of 10 is: 90