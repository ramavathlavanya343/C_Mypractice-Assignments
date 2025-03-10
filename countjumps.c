/*
Name:
Date:
Description:22.WAP a function to count the no. of jumps to reach the last
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to count the minimum number of jumps needed to reach the last index
int count_jumps(int arr[], int size) {

    if (size <= 1) {
        return 0; // No jumps needed if size is 1 or less
    }

    if (arr[0] == 0) {
        return -1; // Not possible to move from the start if the first element is 0
    }

    int jumps = 0;
    int current_end = 0;
    int farthest = 0;

    for (int i = 0; i < size - 1; i++) {
        if (i + arr[i] > farthest) {
            farthest = i + arr[i];
        }

        if (i == current_end) {
            jumps++;
            current_end = farthest;

            if (current_end >= size - 1) {
                return jumps;
            }
        }
    }

    return -1; // If not possible to reach the end
}

int main() {

    int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = count_jumps(arr, size);

    if (result != -1) {
        printf("Minimum number of jumps to reach the last index: %d\n", result);
    } else {
        printf("Not possible to reach the last index.\n");
    }

    return 0;
}
