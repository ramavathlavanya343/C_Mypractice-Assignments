/*
Name:
Date:
Description:Write a c function Given string ‘s’ print the sum of weight of the string. A weight of character is defined as the ascii value of corresponding character. 
Sample Input:
Sample Output:
*/

#include <stdio.h>
#include <string.h>
#if 0
void print_sum_of_weights(const char *s) {

    int sum = 0;
    while (*s) {
        sum += (int) *s;
        s++;
    }
    printf("The sum of the weights of the string is: %d\n", sum);
}
#endif

int print_sum_of_weights(char str[])
{
    int count=0;
    for(int i=0;i<str[i];i++)
    {
	count=count+str[i];
    }

    return count;
}
int main() {

    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if it's present
    input[strcspn(input, "\n")] = '\0';

   int result= print_sum_of_weights(input);
   printf("%d\n",result);

    return 0;
}



