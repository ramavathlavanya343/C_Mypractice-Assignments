#include <stdio.h>
#include <string.h>
void reverse_recursive(char str[], int ind, int len);
/*
Name:Lavanya
Date:07-05-2024
Description:WAP to reverse the given string using recursive method
Sample Input:Test Case 1:
Enter a string : Hello World
Test Case 2:
Enter a string : EMERTXE
Sample Output:Test Case 1:
Reverse string is : dlroW olleH
Test Case 2:Reverse string is : EXTREME
*/
int main()
{

    char str[100];

    printf("Enter any string : ");
    scanf("%[^\n]", str);       //read the string from user

    reverse_recursive(str, 0,strlen(str) - 1);  //calling the function  passing start as 0 end as length -1

    printf("Reversed string is %s\n", str);

    return 0;
}

void reverse_recursive(char str[], int ind, int len)  //declaring a function with arguments

{
     if (ind < len)  //check the condition
    {
        char temp = str[ind];  //swap the character first to end
        str[ind] = str[len];
        str[len] = temp;

        reverse_recursive(str, ind + 1, len - 1);  //calling the function updated start and end characters
    }

}
