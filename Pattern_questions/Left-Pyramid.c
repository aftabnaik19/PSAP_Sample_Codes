// Sample input
//  5
// Sample output
//  12345
//  1234
//  123
//  12
//  1

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
            if (i + j <= n - 1)
            {
                printf("%d", j + 1);
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
