/*
Name:
Date:
Description: Using Structure Sort the cars based on the year
Sample Input:
Sample Output:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the car structure
typedef struct {
    char make[20];
    char model[20];
    int year;
} Car;

// Comparison function for qsort
int compareByYear(const void *a, const void *b) {
    Car *carA = (Car *)a;
    Car *carB = (Car *)b;
    return (carA->year - carB->year);
}

// Function to print the array of cars
void printCars(Car cars[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Make: %s, Model: %s, Year: %d\n", cars[i].make, cars[i].model, cars[i].year);
    }
}

int main() {

    int n;

    // Prompt user for the number of cars
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    Car cars[n];

    // Input car details
    for(int i = 0; i < n; i++) {
        printf("Enter details for car %d\n", i + 1);
        printf("Make: ");
        scanf("%s", cars[i].make);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
    }

    // Sort the cars by year
    qsort(cars, n, sizeof(Car), compareByYear);

    // Print the sorted list of cars
    printf("\nSorted list of cars by year:\n");
    printCars(cars, n);

    return 0;
}



