/*
Name:
Date:
Description:read a string from user check for the given character sequence(bbc,bbe,bb) in the string if any of the sequence is pesent it with the respected mention punctuations 
replace 
bbc ->$
bbe ->&
bb ->* 
Sample Input:
Sample Output:
*/


#include <stdio.h>
#include <string.h>

// Function to replace substrings in a string
void replaceSubstring(char *str) {

    char temp[100]; // Temporary buffer to hold the modified string
    int i, j = 0;

    // Iterate through the string
    for (i = 0; i < strlen(str); i++) {
        // Check for "bbc"
        if (strncmp(&str[i], "bbc", 3) == 0) {
            temp[j++] = '$';
            i = i + 2; // Skip the next two characters
        }
        // Check for "bbe"
        else if (strncmp(&str[i], "bbe", 3) == 0) {
            temp[j++] = '&';
            i = i + 2; // Skip the next two characters
        }
        // Check for "bb"
        else if (strncmp(&str[i], "bb", 2) == 0) {
            temp[j++] = '*';
            i = i + 1; // Skip the next character
        }
        // Copy the character if no replacement is needed
        else {
            temp[j++] = str[i];
        }
    }
    
    temp[j] = '\0'; // Null-terminate the resulting string
    strcpy(str, temp); // Copy the modified string back to the original
}


int main() {

    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Replace the substrings
    replaceSubstring(str);

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}



