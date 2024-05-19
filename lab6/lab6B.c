// PSAP lab 6B (5 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Implement all the string functions without using string library
#include <stdio.h>

int stringLength(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void stringReverse(char *str)
{
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void stringCopy(char *source, char *destination, int n)
{
    for (int i = 0; i < n; i++)
    {
        destination[i] = source[i];
        if (source[i] == '\0')
        {
            break;
        }
    }
}

int stringCompare(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
    {
        return str1[i] - str2[i];
    }
}

char *firstOccurrence(char *str, char c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}

char *lastOccurrence(char *str, char c)
{
    char *last = NULL;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            last = &str[i];
        }
        i++;
    }
    return last;
}

char *findSubstring(char *str, char *substr)
{
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == substr[j])
        {
            int temp = i;
            while (str[temp] == substr[j] && substr[j] != '\0')
            {
                temp++;
                j++;
            }
            if (substr[j] == '\0')
            {
                return &str[i];
            }
            j = 0;
        }
        i++;
    }
    return NULL;
}

int main()
{
    char a[50] = "Hell", b[50] = "Hell is Heaven";

    printf("\nImplementing length function\n");
    printf("First string: %s has length of %d\n", a, stringLength(a));
    printf("Second string: %s has length of %d\n", b, stringLength(b));

    printf("Implementing reverse function\n");
    stringReverse(b);
    printf("Reversed string is: %s\n", b);
    stringReverse(b);

    printf("\nString b copied to string a uptil 7 characters:\n");
    stringCopy(b, a, 7);
    printf("First string: %s\n", a);
    printf("Second string: %s\n", b);

    printf("\nString b copied to string a:\n");
    stringCopy(b, a, 50);
    printf("First string: %s\n", a);
    printf("Second string: %s\n", b);

    printf("\nImplementation of comparing functions\n");
    printf("\nFirst string: %s\n", a);
    printf("Second string: %s\n", b);
    int comparison1 = stringCompare(a, b);
    int comparison2 = stringCompare(a, b);
    if (comparison1 == 0)
        printf("\nThe given strings are equal");
    else
        printf("\nThe result of comparison is %d", comparison1);
    if (comparison2 == 0)
        printf("\nThe given strings are equal upto 4 chars\n");
    else
        printf("\nThe result of comparison upto 4 char is %d", comparison2);

    printf("\nImplementation of first occurrence of char e\n");
    printf("The first occurrence is at: %s\n", firstOccurrence(b, 'e'));

    printf("\nImplementation of last occurrence of char e\n");
    printf("The last occurrence is at: %s\n", lastOccurrence(b, 'e'));

    printf("\nImplementation of substring within a string using custom function\n");
    printf("%s", findSubstring(b, "Heaven"));

    return 0;
}

// Output
// Implementing length function
// First string: Hell has length of 4
// Second string: Hell is Heaven has length of 14
// Implementing reverse function
// Reversed string is: nevaeH si lleH

// String b copied to string a uptil 7 characters:
// First string: Hell is
// Second string: Hell is Heaven

// String b copied to string a:
// First string: Hell is Heaven
// Second string: Hell is Heaven

// Implementation of comparing functions

// First string: Hell is Heaven
// Second string: Hell is Heaven

// The given strings are equal
// The given strings are equal upto 4 chars

// Implementation of first occurrence of char e
// The first occurrence is at: ell is Heaven

// Implementation of last occurrence of char e
// The last occurrence is at: en

// Implementation of substring within a string using custom function
// Heaven
