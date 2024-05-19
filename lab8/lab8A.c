// PSAP lab 8A (19 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Reverse a line
#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseString(char *str)
{
    int length = strlen(str);
    int start = 0;

    // Reverse the entire string
    reverse(str, 0, length - 1);

    // Reverse each word individually
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    // Reverse the last word
    reverse(str, start, length - 1);
}

int main()
{
    // char str[] = "reverse this string without reversing the words";
    char str[100];
    scanf("%[^\n]s", str);

    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string without reversing words: %s\n", str);

    return 0;
}

// output
// case 1
// Hello world
// Original string: Hello world
// Reversed string without reversing words: world Hello

// case 2
//  Electronics and telecomunication engineering
//  Original string: Electronics and telecomunication engineering
//  Reversed string without reversing words: engineering telecomunication and Electronics