// PSAP lab 7A (12 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Check whether the two given strings are palindrome or not

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #define isLetter(x) (((x >= 65 && x <= 90) && (x >= 97 && x <= 122)) ? 1 : 0)
char toLower(char x)
{
    if (x <= 'Z' && x >= 'A')
    {
        return x + 32;
    }
    else
    {
        return x;
    }
}
int cmpfunc(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}
int main()
{
    char s[100], temp[100], ctr = 0;
    scanf("%[^\n]*%c", s);
    fflush(stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            temp[ctr] = toLower(s[i]);
            ctr++;
        }
    }
    temp[ctr] = '\0';
    // printf("%d", strlen(temp));
    // strrev(s);
    // printf("\n%s", s);

    qsort(temp, strlen(temp), sizeof(char), cmpfunc);
    // printf("\n%s Done", temp);

    scanf("%[^\n]*%c", s);
    ctr = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            s[ctr] = toLower(s[i]);
            ctr++;
        }
    }
    s[ctr] = '\0';
    qsort(s, strlen(s), sizeof(char), cmpfunc);
    // printf(" %s", s);
    int comparison = strcmp(temp, s);
    if (comparison == 0)
    {
        printf("The given strings are Anagram");
    }
    else
        printf("The given strings are not Anagram");
    return 0;
}