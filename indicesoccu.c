#include <stdio.h>
#include <string.h>

// Function to find and print all occurrences of a substring within a larger string
void find_occurrences(const char *str, const char *sub) {

    int str_len = strlen(str);
    int sub_len = strlen(sub);
    int found = 0;  // Flag to track if any occurrences were found

    // Loop through the main string to find the substring
    for (int i = 0; i <= str_len - sub_len; i++) {
        int j;
        // Check if substring matches
        for (j = 0; j < sub_len; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        // If the substring matches completely
        if (j == sub_len) {
            printf("Substring found at index %d\n", i);
            found = 1;  // Set flag to indicate that an occurrence was found
        }
    }

    // If no occurrences were found, print an error message
    if (!found) {
        printf("Substring not found\n");
    }
}

int main() {

    char str[1000];
    char sub[100];

    // Input the main string
    printf("Enter the main string: ");
    scanf("%[^\n]%*c", str);  // Read input until newline is encountered

    // Input the substring
    printf("Enter the substring: ");
    scanf("%[^\n]%*c", sub);  // Read input until newline is encountered

    // Find and print occurrences of the substring
    find_occurrences(str, sub);

    return 0;
}

