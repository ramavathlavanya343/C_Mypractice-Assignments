#include <stdio.h>

int main() {

    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < 32; i++) { // Assuming a 32-bit integer
        if (num & (1 << i)) {  // Check if the i-th bit is set
            count++;
        }
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}

