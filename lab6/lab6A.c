// PSAP lab 6A (5 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Implement all the string functions using string library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[50] = "Hell", b[50] = "Hell is Heaven";

    // taking string input
    //  printf("Enter the first string: ");
    //  scanf(" %[^\n]s", a);
    //  printf("Enter the second string: ");
    //  scanf(" %[^\n]s", b);

    // implemnting length function
    printf("\nImplementing strlen() function\n");
    printf("First string: %s has length of %d\n", a, strlen(a));
    printf("Second string: %s has length of %d\n", b, strlen(b));

    // reverse a string
    printf("Implementing strrev() function\n");
    printf("Reversed string is: %s\n", strrev(b));
    strrev(b);

    // copy second string to first string using strncpy
    strncpy(a, b, 7);
    printf("\nString b copied to string a uptil 7 characters:\n");
    // printf("%d", strlen(a));
    printf("First string: %s\n", a);
    printf("Second string: %s\n", b);

    strcpy(a, b);
    printf("\nString b copied to string a:\n");
    printf("First string: %s\n", a);
    printf("Second string: %s\n", b);
    a[4] = '\0';
    // a[50] = "Hell";

    // using strcmp and strncmp
    printf("\nImplementation of strcmp and strncmp functions\n");
    printf("\nFirst string: %s\n", a);
    printf("Second string: %s\n", b);
    int comparison1 = strcmp(a, b);
    int comparison2 = strncmp(a, b, 4);
    if (comparison1 == 0)
        printf("\nThe given strings are equal");
    else
        printf("\nThe result of comparison is %d", comparison1);
    if (comparison2 == 0)
        printf("\nThe given strings are equal upto 4 chars\n");
    else
        printf("\nThe result of comparison upto 4 char is %d", comparison2);

    printf("\nImplementation of first occurence of char e\n");
    // first occurence of a character in a string
    printf("The first occurence is at: %s\n", strchr(b, 'e'));
    // last occurence of a character in a string
    printf("\nImplementation of last occurence of char e\n");
    printf("The last occurence is at: %s\n", strrchr(b, 'e'));

    // substring within a string
    printf("\nImplementation of substring within a string using strstr() function\n");
    printf("%s", strstr(b, "Heaven"));
    return 0;
}

// Output of above code
// Implementing strlen() function
// First string: Hell has length of 4
// Second string: Hell is Heaven has length of 14
// Implementing strrev() function
// Reversed string is: nevaeH si lleH
//
// String b copied to string a uptil 7 characters:
// First string: Hell is
// Second string: Hell is Heaven
//
// String b copied to string a:
// First string: Hell is Heaven
// Second string: Hell is Heaven
//
// Implementation of strcmp and strncmp functions
//
// First string: Hell
// Second string: Hell is Heaven
//
// The result of comparison is -1
// The given strings are equal upto 4 chars
//
// Implementation of first occurence of char e
// The first occurence is at: ell is Heaven
//
// Implementation of last occurence of char e
// The last occurence is at: en
//
// Implementation of substring within a string using strstr() function
// Heaven

// Case 2
// Enter the number of elements in array:7
// Enter the elements of array: 1 2 4 3 7 6
// The missing element is: 5