/*
Name:
Date:
Description:write a program to check whether 2 strings are equal or not by ignoring the case 
Sample Input:
Sample Output:
 */

#include <stdio.h>
#include <string.h>

int compareStringsIgnoreCase(const char *str1, const char *str2) {

    while (*str1 && *str2) {
        if (*str1 != *str2) {
            if (*str1 >= 'A' && *str1 <= 'Z') {
                if (*str1 + 32 != *str2)
		    return 0;
            } else if (*str1 >= 'a' && *str1 <= 'z') {
                if (*str1 - 32 != *str2)
		    return 0;
            } else {
                return 0;
            }
        }
        str1++;
        str2++;
    }
    return *str1 == *str2; // Ensure both strings end at the same point
}

int main() {

    char str1[100], str2[100];
        
    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar(); // Consume newline

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    if (compareStringsIgnoreCase(str1, str2)) {
        printf("The strings are equal (ignoring case).\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
