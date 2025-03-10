/*
Name:
Date:
Description: Prints intersection of two arrays arr1[] and arr2[]
             len1 is the number of elements in arr1[]
             len2 is the number of elements in arr2[] 
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to find and print common elements between two arrays
void findCommonElements(int arr1[], int len1, int arr2[], int len2) {

  //  printf("Common elements are: ");

    int found=0;
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {

		if(!found)
		{
		    printf("Common elements are:");
		}
                printf("%d ", arr1[i]);
		found=1;
                break; // Move to the next element in arr1
            }
        }
    }

    if(!found)
    {
	printf("No Common Elements");
    }
    printf("\n");
}

int main() {


    int len1, len2;

    // Input the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &len1);

    int arr1[len1];
    
    // Input the elements of the first array
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &len2);

    int arr2[len2];
    
    // Input the elements of the second array
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find and print common elements
    findCommonElements(arr1, len1, arr2, len2);

    return 0;
}

