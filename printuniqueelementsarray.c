/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/


#include <stdio.h>

// Function to find and print unique elements in an array
void findUniqueElements(int arr[], int size) {

    int i, j, isUnique;
    int Found = 0;  // Flag to check if any unique element is found

    printf("Unique elements in the array are: ");
    for(i = 0; i < size; i++) {
        isUnique = 1;  // Assume the element is unique
        for(j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;  // Found a duplicate
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
            Found = 1;  // Set the flag since a unique element is found
        }
    }
         
    if(!Found) {
        printf("No Unique Elements is Found");  // If no unique element is found, print "None"
    }
    
    printf("\n");
}

int main() {

    int size, i;
     
    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;  // Exit the program with an error code
    }

    if (size <= 0) {
        printf("Error: Array size must be a positive integer.\n");
        return 1;
    }

    int arr[size];
    
    // Ask the user to input the elements
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
      //  printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input. Please enter a valid integer for element %d.\n", i + 1);
            return 1;
        }
    }

    findUniqueElements(arr, size);

    return 0;
}

