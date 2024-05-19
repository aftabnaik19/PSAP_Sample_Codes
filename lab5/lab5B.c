// PSAP lab 5B (27th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Given an array of n unsorted integers perform linear search for a particular element

#include <stdio.h>
#include <math.h>
int main()
{

    int n, find, flag = 0;
    printf("Enter the number of elements in array: ");
    scanf(" %d", &n);

    int arr[n];
    int var;
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {

        scanf(" %d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &find);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            if (flag == 0)
                printf("The given element (%d), is present at the following index: ", find);
            printf("%d ", i);
            flag = 1;
        }
    }
    if (flag == 0)

        printf("The given element (%d), is not present in the array", find);
    return 0;
}

// Output of above code
// Case 1
// Enter the number of elements in array: 5
// Enter the elements of array: 1 2 3 2 5
// Enter the element to find: 2
// The given element (2), is present at the index: 1 3

// Case 2
// Enter the number of elements in array: 5
// Enter the elements of array: 1 2 3 4 5
// Enter the element to find: 6
// The given element (6), is not present in the array