/*
Name:
Date:
Description:write a function given a string s , print it after changing the middle 
element to * using c
Sample Input:
Sample Output:
 */

#include <stdio.h>
#include <string.h>

void changeMiddle(char *s) {

    //  int len = strlen(s);
    int len=0;

    while(s[len] != '\0')
    {
	len++;
        
    }
    if (len == 0) {
	return; // If the string is empty, do nothing
    }

    int middleIndex = len / 2;

    if (len % 2 == 0) {
	// If the length is even, change the character just before the middle
	s[middleIndex - 1] = '*';
	s[middleIndex]='*';
    } else {
	// If the length is odd, change the middle character
	s[middleIndex] = '*';
    }

    printf("%s\n", s);
}

int main() {
 
    // char str1[] = "hello";
    // char str2[] = "FUNCtion";
    char str1[100];
    char str2[100];

    printf("Enter the str1:");
    scanf("%[^\n]",str1);

    getchar();

    printf("Enter str2:");
    scanf("%[^\n]",str2);

    changeMiddle(str1); // Output: he*lo
    changeMiddle(str2); // Output: abc*ef
    
    return 0;
}
