// PSAP lab 3D (13th Feb 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Find the roots of the quadratic equation. Take a, b, c as input (the coefficients of the equation) and print the roots

#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, c;
    printf("Enter the coefficients of you quadratic equation in standard form: ");
    scanf("%d %d %d", &a, &b, &c);
    float det;
    if ((det = b * b - 4 * a * c) < 0)
    {
        printf("The roots for the given equation are imaginary (i.e. DNE)");
    }
    else
    {
        det = sqrt(det);
        float root1 = (-b + det) / (2 * a);
        float root2 = (-b - det) / (2 * a);
        printf("the roots of the given equation are: \n %.3f and %.3f", root1, root2);
    }
    return 0;
}

// Output of above code
// Case 1
// Enter the coefficients of you quadratic equation in standard form: 3 -4 -4
// the roots of the given equation are:
//  2.000 and -0.667

// Case 2
// Enter the coefficients of you quadratic equation in standard form: 1 4 4
// the roots of the given equation are:
//  -2.000 and -2.000