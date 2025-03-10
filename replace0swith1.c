/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

int replaceZerosWithOnes(int num) {

    int result = 0, place = 1;

    // Handle the case when num is 0
    if (num == 0) {
        return 1;
    }

    while (num > 0) {

        int digit = num % 10;
        if (digit == 0) {
            digit = 1;
        }
        result = result + digit * place;
        place =place * 10;
        num =num / 10;
    }
     
   return result;
}

int main() {

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int newNum = replaceZerosWithOnes(num);
    printf("Modified number: %d\n", newNum);

    return 0;
}
