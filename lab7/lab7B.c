// PSAP lab 7B (12 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Find Smallest and largest word from a multi-line Paragraph

#include <stdio.h>

#include <string.h>

int main()
{
    char input[1000];
    printf("Enter a multi-line string:\n");

    // Read multi-line input until EOF
    // fgets(input, sizeof(input), stdin);
    char t;
    int i = 0;
    while ((t = getchar()) != '#')
    {
        input[i++] = t;
    }

    char *token;
    char *largest = NULL;
    char *smallest = NULL;

    // Tokenize the input string
    token = strtok(input, " \n");

    // Initialize largest and smallest to the first word
    largest = token;
    smallest = token;

    // Iterate through the remaining words
    while (token != NULL)
    {
        // Update largest and smallest
        if (strlen(token) > strlen(largest))
        {
            largest = token;
        }
        if (strlen(token) < strlen(smallest))
        {
            smallest = token;
        }

        // Get the next token
        token = strtok(NULL, " \n");
    }

    // Print the largest and smallest words
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

// output
// case 1
// Enter a multi-line string:
// Hello my name is Aftab
// Hello his name is AftabXYZ#
// Largest word: AftabXYZ
// Smallest word: my

// case 2
// Enter a multi-line string:
// The terminator for the input in this particular code is hash #
// Largest word: terminator
// Smallest word: in