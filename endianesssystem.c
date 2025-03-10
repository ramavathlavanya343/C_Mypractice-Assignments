/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

int main() {

    unsigned int num = 1;
    char *ptr = (char*)&num;

    if (*ptr == 1) {
        printf("The system is Little Endian\n");
    } else {
        printf("The system is Big Endian\n");
    }
    
    return 0;
}
