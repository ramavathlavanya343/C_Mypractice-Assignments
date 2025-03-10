#include <stdio.h>

// Function to convert a string to uppercase
void toUpperCase(char* str) {

    int i = 0;
    while (str[i] != '\0') {

        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {

    char str[100];

    // Input the string
    	
    scanf("%[^\n]", str);

    // Convert to uppercase
    toUpperCase(str);

    // Output the converted string
    printf("Uppercase string: %s\n", str);

    return 0;
}
