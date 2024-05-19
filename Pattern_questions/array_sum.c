#include <stdio.h>
#include <stdlib.h>

int sum_arr(int *ptr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += *(ptr + i);
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = sum_arr(arr, n);
    printf("%d", sum);
}