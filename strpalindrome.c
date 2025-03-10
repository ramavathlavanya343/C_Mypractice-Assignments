/*
Name:
Date:
Description:12. WAP to check the given string is palindrome or not
Sample Input:
Sample Output:
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main() {

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word. Use fgets for full sentences.

    if (is_palindrome(str)) {
        printf("Yes, Entered string is palindrome.\n");
    } else {
        printf("No, Entered string is not palindrome.\n");
    }

    return 0;
}

