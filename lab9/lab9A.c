// PSAP lab 9A (23 April 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement:WAP to store and print information of 10 employees. The items of information are name, grade, age. If grade=HSK (Highly skilled) then store hobby name and credit card no. If grade=SSK (semiskilled) then store vehicle number and distance from college. Avoid wastage of memory by using unions in structures.
// Test case 1: Accept information of 10 employees, store and display.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    char *name;
    char grade[3];
    int age;
    union
    {
        struct HSK
        {
            char *hobby;
            int credit_no;
        } hsk;
        struct SSK
        {
            int vehicle_number;
            int distance;
        } ssk;
    } u1;
} e1[10];

char *input()
{
    // fflush(stdin);
    char *array = (char *)malloc(sizeof(char));
    if (array == NULL)
    {
        printf("error: Malloc failed\n");
        exit(1);
    }
    int i;
    for (i = 0; array[i - 1] != '\n'; i++)
    {
        array = (char *)realloc(array, sizeof(char) + i + 1);
        if (array == NULL)
        {
            printf("error: Realloc failed");
            exit(1);
        }
        scanf("%c", &array[i]);
    }
    array[i - 1] = 0;
    return array;
}

int main()
{
    int n = 2;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for Employee %d: \n", i + 1);
        printf("Enter the name\n");
        fflush(stdin);
        e1[i].name = input();
        printf("Enter the grade\n");
        scanf(" %s", &e1[i].grade);
        printf("%s\n", e1[i].grade);
        printf("Enter the age\n");
        scanf(" %d", &e1[i].age);
        if (e1[i].grade[0] == 'H')
        {
            printf("Enter the Hobby\n");
            fflush(stdin);
            e1[i].u1.hsk.hobby = input();

            printf("Enter the credit card no: \n");
            scanf("%d", &e1[i].u1.hsk.credit_no);
        }
        else if (e1[i].grade[0] == 'S')
        {
            printf("Enter the vehicle no.\n");
            scanf("%d", &e1[i].u1.ssk.vehicle_number);

            printf("Enter the distance from college\n");
            scanf("%d", &e1[i].u1.ssk.distance);
        }
        else
        {
            printf("Please enter valid grade: HSK or SSK\n");
            exit(2);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Below are the details for Employee %d: \n", i + 1);
        printf("Name: %s\n", e1[i].name);
        printf("Grade: %s\n", e1[i].grade);
        printf("Age: %d\n", e1[i].age);
        if (e1[i].grade[0] == 'H')
        {
            printf("Hobby: %s\n", e1[i].u1.hsk.hobby);
            printf("Credit card no: %d\n", e1[i].u1.hsk.credit_no);
        }
        else if (e1[i].grade[0] == 'S')
        {
            printf("Vehicle no. : %d\n", e1[i].u1.ssk.vehicle_number);
            printf("Distance: %d\n", e1[i].u1.ssk.distance);
        }
    }
}

// output 1
// Enter the details for Employee 1:
// Enter the name
// Aftab
// Enter the grade
// HSK
// HSK
// Enter the age
// 21
// Enter the Hobby
// Anime
// Enter the credit card no:
// 2343923423923423
// Enter the details for Employee 2:
// Enter the name
// Atharva
// Enter the grade
// SSK
// SSK
// Enter the age
// 20
// Enter the vehicle no.
// 1388
// Enter the distance from college
// 2000
// Below are the details for Employee 1:
// Name: Aftab
// Grade: HSK
// Age: 21
// Hobby: Anime
// Credit card no: 856706271
// Below are the details for Employee 2:
// Name: Atharva
// Grade: SSK
// Age: 20
// Vehicle no. : 1388
// Distance: 2000