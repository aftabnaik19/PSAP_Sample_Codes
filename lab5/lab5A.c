// PSAP lab 5A (27th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Given an array of n integers sort them into even and odd array and print them on different lines

#include <stdio.h>
#include <math.h>
int main()
{

    int n, odd = 0, even = 0;
    printf("Enter the number of elements in array: ");
    scanf(" %d ", &n);
    int arr[n];
    // printf("%d", n);
    int var;
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf(" %d", &arr[i]);
        if (arr[i] & 1)
        {
            odd++;
        }
    }
    // printf("%d", odd);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", arr[i]);
    // }

    int oddArr[odd], evenArr[n - odd], oddCounter = 0, evenCounter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
        {
            oddArr[oddCounter] = arr[i];
            oddCounter++;
        }
        else
        {
            evenArr[evenCounter] = arr[i];
            evenCounter++;
        }
    }
    printf("The Odd elements are: ");
    for (int i = 0; i < odd; i++)
    {
        /* code */ printf("%d ", oddArr[i]);
    }
    printf("\nThe even elements are: ");
    for (int i = 0; i < n - odd; i++)
    {
        /* code */ printf("%d ", evenArr[i]);
    }

    return 0;
}

// Output of above code
// Case 1
// Enter the number of elements in array: 5
// 1 2
// 3 4 5
// The Odd elements are: 1 3 5
// The even elements are: 2 4

// Case 2
// Enter the number of elements in array: 10
// 54 546 45 78 98 78 12 45 65 23 32
// The Odd elements are: 45 45 65 23
// The even elements are: 54 546 78 98 78 12