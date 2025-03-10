/*
Name:
Date:
Description:17. WAP to in a String you have to make alternative upper and lower
Sample Input:
Sample Output:
 */

#include <stdio.h>
#include <string.h> // for strlen() function

void convertToUpper(char *str) {

    int i = 0;
    while (str[i] != '\0') {
	// Convert lowercase letters to uppercase
	if (str[i] >= 'a' && str[i] <= 'z') {
	    str[i] = str[i] - ('a' - 'A');
	}
	i++;
    }
}

int main() {

    char str[100];

    // Input string from user
    printf("Enter the string :");
    scanf("%[^\n]",str);

    // Convert the string to uppercase
    convertToUpper(str);

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

