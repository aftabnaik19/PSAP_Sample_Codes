// PSAP lab 5 (27th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Given an array of n sorted integers perform iterative binary search for a particular element

#include <stdio.h>
#include <math.h>

int binarySearch(int arr[], int n, int find)
{
    int high = n - 1, low = 0, flag = 0;

    int mid = low + (high - low) / 2;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (arr[mid] > find)
        {
            high = mid - 1;
        }
        if (arr[mid] < find)
        {
            low = mid + 1;
        }
        if (arr[mid] == find)
        {
            printf("The given element (%d), is present on the index %d", find, mid);
            flag = 1;
            return mid;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The given element (%d), is not present in the array", find);
        return -1;
    }
}
int main()
{

    int n, find, flag = 0;
    printf("Enter the number of elements in array: ");
    scanf(" %d", &n);

    int arr[n];
    int var;
    printf("Enter the elements of array in Sorted manner: ");
    int high = n - 1, low = 0;
    for (int i = 0; i < n; i++)
    {

        scanf(" %d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &find);

    binarySearch(arr, n, find);
    return 0;
}

// Output of above code
// Case 1
// Enter the number of elements in array: 7
// Enter the elements of array in Sorted manner: 52 67 94 135 258 901 10002654
// Enter the element to find: 901
// The given element (901), is present on the index 5

// Case 2
// Enter the number of elements in array: 5
// Enter the elements of array: 1 2 3 4 5
// Enter the element to find: 6
// The given element (6), is not present in the array