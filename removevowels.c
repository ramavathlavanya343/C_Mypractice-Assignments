/*
Name:
Date:
Description:WAP to remove vowels from a Strings
Sample Input:
Sample Output:
*/

#include <stdio.h>

void removeVowels(char *str) {

    int i = 0, j = 0;
    
    while (str[i] != '\0') {
        // Check if the character is not a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the resulting string
}

int main() {

    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
