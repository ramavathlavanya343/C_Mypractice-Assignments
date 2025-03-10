/*
Name:
Date:
Description:5.Write a function given a string s, print ‘Yes’ if it has a vowel in it else print ‘no’.
Sample Input:
Sample Output:
*/


#include <stdio.h>
#include <string.h>

int has_vowel(char s[]) {

    int i = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return 1;  // Yes
        }
        i++;
    }
    return 0;  // No
}

int main() {

    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if it's present
    input[strcspn(input, "\n")] = '\0';

    if (has_vowel(input)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}




#if 0
#include <stdio.h>
#include <string.h>

void has_vowel(const char *s) {

    while (*s) {
        char c = *s;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("Yes\n");
            return;
        }
        s++;
    }
    printf("No\n");
}
 #if 0
    const char *vowels = "aeiouAEIOU";
    int i, j;

    while (*s) {
        for (i = 0; i < strlen(vowels); i++) {
            if (*s == vowels[i]) {
                printf("Yes\n");
                return;
            }
        }
        s++;
    }
    printf("No\n");
}
#endif

int main() {

    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if it's present
    input[strcspn(input, "\n")] = '\0';

    has_vowel(input);

    return 0;
}
#endif


