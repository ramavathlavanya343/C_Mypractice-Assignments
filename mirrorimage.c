/*
Name:
Date:
Description:write a function given two arrays print 'Yes'. if they are mirror image of each other, otherwise ' no' by using function 
Sample Input:
Sample Output:
*/


#include <stdio.h>

// Function to check if two arrays are mirror images of each other
void areMirrorImages(int arr1[], int arr2[], int size) {

    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[size - i - 1]) {
            printf("No\n");
            return; // Exit early if a mismatch is found
        }
    }
    printf("Yes\n");
}

int main() {

    int size1, size2;

    // Input the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];

    // Input the elements of the first array
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];

    // Input the elements of the second array
    printf("Enter the elements of the second array: ");
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Check if the arrays are of the same size
    if(size1 != size2) {
        printf("No\n");
    } else {
        areMirrorImages(arr1, arr2, size1);
    }
    
    return 0;
}
