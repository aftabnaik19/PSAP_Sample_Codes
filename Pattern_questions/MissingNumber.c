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
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr_sum = sum_arr(arr, n - 1);
    int tot_sum = n * (n + 1) / 2;
    printf("%d", tot_sum - arr_sum);
}