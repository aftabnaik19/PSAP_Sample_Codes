// PSAP lab 8B (19 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Binary search using recursion

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binarySearch(int target, int high, int low, int arr[])
{
    int mid = (high + low) / 2;
    // printf("%d  %d  %d\n", high, low, mid); debugging statement
    if (target == arr[mid])
    {
        return mid;
    }
    if (high <= low)
    {
        return -1;
    }
    else if (target < arr[mid])
    {
        high = mid - 1;
    }
    else if (target > arr[mid])
    {
        low = mid + 1;
    }
    binarySearch(target, high, low, arr);
}

int main()
{
    int n, target = 10;
    printf("Enter the number of Elements: ");
    scanf(" %d", &n);
    int arr[n];
    printf("Enter the Elements in Sorted Order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Target Element: ");
    scanf(" %d", &target);
    int ans = binarySearch(target, n - 1, 0, arr);
    if (ans == -1)
    {
        printf("The element is not present in the array");
    }
    else
        printf("The element is present at index: %d", ans);
}

// output 1
// Enter the number of Elements: 10
// Enter the Elements in Sorted Order: 1 2 3 4 5 6 7 8 9 10
// Enter the Target Element: 10
// The element is present at index: 9

// output 2
// Enter the number of Elements: 4
// Enter the Elements in Sorted Order: 8 9 100 1000
// Enter the Target Element: 30
// The element is not present in the array