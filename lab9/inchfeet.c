#include <stdio.h>
#include <stdlib.h>

struct distance
{
    int feet;
    float inch;
} d1, d2, result;

int main()
{

    printf("Enter the first distance:\n");
    printf("Enter feet:\n");
    scanf("%d", &d1.feet);
    printf("Enter inch:\n");
    scanf("%f", &d1.inch);
    if (d1.inch > 12)
    {
        printf("Please enter the value of inch less than equal to 12");
        exit(0);
    }
    printf("Enter the second distance:\n");
    printf("Enter feet:\n");
    scanf("%d", &d2.feet);
    printf("Enter inch:\n");
    scanf("%f", &d2.inch);
    if (d2.inch > 12)
    {
        printf("Please enter the value of inch less than equal to 12");
        exit(0);
    }
    // printf("%d %d %f %f", d1.feet, d2.feet, d1.inch, d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    if (result.inch > 12)
    {
        result.inch -= 12;
        result.feet++;
    }
    printf("\n %d %f", result.feet, result.inch);

    return 0;
}