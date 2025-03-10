/*
Name:
Date:
Description:2.Write a C program to find the sum of ‘n’ odd natural numbers and display the numbers too. 
Sample Input:
Sample Output:
 */


#include <stdio.h>

int main() {

    int n;
    int sum = 0;

 
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input\n");
        return 1; // Exit the program with an error code
    }

    printf("The first %d odd natural numbers are: ", n);

    for (int i = 0; i < n; i++) {

	int odd_number = 2 * i + 1;
	printf("%d ", odd_number);

	sum = sum + odd_number;

    }

    printf("\nThe sum of the first %d odd natural numbers is: %d\n", n, sum);
    return 0;
}
