/*
Name:
Date:
Description:3. WAP Swap nibbles
Sample Input:
Sample Output:
*/

#include <stdio.h>

// Function to swap nibbles in a byte
unsigned char swapNibbles(unsigned char x) {
    // Swap the nibbles and return the result
    return ((x & 0x0F) << 4) | ((x & 0xF0) >> 4);
}

int main() {

    unsigned char byte;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &byte);

    unsigned char swappedByte = swapNibbles(byte);

    printf("Original byte: 0x%02X\n", byte);
    printf("Byte after swapping nibbles: 0x%02X\n", swappedByte);

    return 0;
}



