#include <stdio.h>

//sample input/output
/*Enter the number of elements in the array: 5
Enter the elements of the array: 1 1 2 3 3
Unique elements in the array are: 2*/

// Function to print all unique elements in an array
void printUniqueElements(int arr[], int size) {

    int i, j;
    int flag=0;

    printf("Unique elements in the array are: ");

    for (i = 0; i < size; i++) {
        flag = 1; // Assume the element is unique

        // Check if the element is unique
        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                flag = 0; // Element is not unique
                break;
            }
        }

        // If the element is unique, print it
        if (flag) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {

    int arr[100];
    int n, i;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the unique elements in the array
    printUniqueElements(arr, n);

    return 0;
}


