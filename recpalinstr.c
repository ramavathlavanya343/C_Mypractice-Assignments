#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end);

int main() {

    char str[100];

    printf("Enter the string: ");
    gets(str);  // Note: gets() is unsafe; consider using fgets().

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1))
        printf("Yes, Entered string is palindrome.\n");
    else
        printf("No, Entered string is not palindrome.\n");
        
    return 0;
}

int isPalindrome(char str[], int start, int end) {

    // Base case: if the string is empty or has one character
    if (start >= end)
        return 1;

    // Check if the characters at start and end positions are the same
    if (str[start] != str[end])
        return 0;

    // Recursive call to check the next pair of characters
    return isPalindrome(str, start + 1, end - 1);
}

