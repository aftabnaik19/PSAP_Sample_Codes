// Sample input
//  5
// Sample output
//     1
//    21
//   321
//  4321
// 54321
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                printf("%d", n - j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
