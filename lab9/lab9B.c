// PSAP lab 9A (23 April 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement:WAP to create inventory to store information of motorcycle which has a price, engine size, mileage and information of bicycle which has a price and color. Use unions and structures to accept and print all information of motorcycle and bicycle.
// Test cases:
// Test Case 1: Accept all information, Print all information
// Test case 2: Accept information of bicycle and print

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union InventoryItem
{
    struct Motorcycle
    {
        float price;
        int engineSize;
        float mileage;
    } motorcycle;
    struct Bicycle
    {
        float price;
        char color[20];
    } bicycle;
};

int main()
{
    union InventoryItem item;

    // Test Case 1
    printf("Test Case 1: Motorcycle\n");
    printf("Enter price of motorcycle: ");
    scanf("%f", &item.motorcycle.price);
    printf("Enter engine size of motorcycle: ");
    scanf("%d", &item.motorcycle.engineSize);
    printf("Enter mileage of motorcycle: ");
    scanf("%f", &item.motorcycle.mileage);
    printf("Price: %.2f\n", item.motorcycle.price);
    printf("Engine Size: %d\n", item.motorcycle.engineSize);
    printf("Mileage: %.2f\n", item.motorcycle.mileage);

    // Test Case
    printf("\nTest Case 2: Bicycle\n");
    printf("Enter price of bicycle: ");
    scanf("%f", &item.bicycle.price);
    printf("Enter color of bicycle: ");
    scanf("%s", item.bicycle.color);
    printf("Price: %.2f\n", item.bicycle.price);
    printf("Color: %s\n", item.bicycle.color);

    return 0;
}

// output
// Test Case 1: Motorcycle
// Enter price of motorcycle: 2003
// Enter engine size of motorcycle: 45454
// Enter mileage of motorcycle: 56456
// Price: 2003.00
// Engine Size: 45454
// Mileage: 56456.00

// Test Case 2: Bicycle
// Enter price of bicycle: 5465
// Enter color of bicycle: 65464
// Price: 5465.00
// Color: 65464