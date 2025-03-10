/*
Name:
Date:
Description:WAP Size of data type in Macro
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Macros to determine the size of different data types
#define SIZE_OF_INT (sizeof(int))
#define SIZE_OF_CHAR (sizeof(char))
#define SIZE_OF_FLOAT (sizeof(float))
#define SIZE_OF_DOUBLE (sizeof(double))
#define SIZE_OF_LONG (sizeof(long))
#define SIZE_OF_SHORT (sizeof(short))
#define SIZE_OF_LONG_LONG (sizeof(long long))

int main() {

    printf("Size of int: %zu bytes\n", SIZE_OF_INT);
    printf("Size of char: %zu bytes\n", SIZE_OF_CHAR);
    printf("Size of float: %zu bytes\n",SIZE_OF_FLOAT);
    printf("Size of double: %zu bytes\n", SIZE_OF_DOUBLE);
    printf("Size of long: %zu bytes\n", SIZE_OF_LONG);
    printf("Size of short: %zu bytes\n", SIZE_OF_SHORT);
    printf("Size of long long: %zu bytes\n", SIZE_OF_LONG_LONG);

    return 0;
}
