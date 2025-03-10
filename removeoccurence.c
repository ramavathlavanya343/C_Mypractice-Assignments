/*
Name:
Date:
Description:write a c program to remove all occurrences of a character from string 
Sample Input:
Sample Output:
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeChar(char *str, char ch) {

    int i, j;
    int length = 0;
    char lowerCharToRemove = tolower(ch);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Iterate through the string and shift characters to remove the specified character
    for (i = 0, j = 0; i < length; i++) {
        if (tolower(str[i]) != lowerCharToRemove) {
            str[j] = str[i];
            j++;
        }
    }

    // Null terminate the resulting string
    str[j] = '\0';
}

int main() {

    char str[100];
    char charToRemove;

    // Input the string
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    // Input the character to remove
    printf("Enter the character to remove: ");
    scanf("%c", &charToRemove);

    // Remove the character from the string
    removeChar(str, charToRemove);

    // Output the resulting string
    printf("String after removing '%c': %s\n", charToRemove, str);

    return 0;
}






















#if 0
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i, j;
    int length = 0;
    char lowerCharToRemove = tolower(charToRemove);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Iterate through the string and shift characters to remove the specified character
    for (i = 0, j = 0; i < length; i++) {
        if (tolower(str[i]) != lowerCharToRemove) {
            str[j] = str[i];
            j++;
        }
    }

    // Null terminate the resulting string
    str[j] = '\0';
}


#if 0
void removeChar(char *str, char charToRemove) {

    int i, j;
    int length = 0;

    // Find the length of the string
    while (str[length] != '\0') {
	length++;
    }

    // Iterate through the string and shift characters to remove the specified character
    for (i = 0, j = 0; i < length; i++) {
	if (str[i] != charToRemove) {
	    str[j] = str[i];
	    j++;
	}
    }

    // Null terminate the resulting string
    str[j] = '\0';
}
#endif
int main() {

    char str[100];
    char charToRemove;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
	str[strlen(str) - 1] = '\0';
    }

    // Input the character to remove
    printf("Enter the character to remove: ");
    scanf("%c", &charToRemove);

    // Remove the character from the string
    removeChar(str, charToRemove);

    // Output the resulting string
    printf("String after removing '%c': %s\n", charToRemove, str);

    return 0;
}

#endif


