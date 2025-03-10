/*
Name:
Date:
Description: write a c program to find the common elements between two arrays
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to find common elements between two arrays
void findCommonElements(int arr1[], int size1, int arr2[], int size2) {

    int found = 0; // Flag to track if any common elements are found

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                if (!found) {
                    printf("Common elements are: "); // Print only if a common element is found
                }
                printf("%d ", arr1[i]);
                found = 1; // Set flag to 1 when a common element is found
                break; // Move to the next element in arr1
            }
        }
    }
    
    if (!found) { // Check if no common elements were found
        printf("No common elements found");
    }

    printf("\n");
}


int main() {

    int size1, size2;

    // Input the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];

    // Input the elements of the first array
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];

    // Input the elements of the second array
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find and print common elements
    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}






#if 0
#include <stdio.h>

// Function to find common elements between two arrays
void findCommonElements(int arr1[], int size1, int arr2[], int size2) {

   int found=0;
    printf("Common elements are: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
		found=1;
                break; // Move to the next element in arr1
            }
	    
        }

    }
    if(!found)
    {
	printf("No common elements found");
    }
    printf("\n");
}

int main() {

    int size1, size2;

    // Input the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];

    // Input the elements of the first array
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];

    // Input the elements of the second array
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find and print common elements
    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}
#endif


