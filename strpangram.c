#include <stdio.h>
int pangram(char str[]);
/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/

int main()
{

     char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]",str);          //read the string from use


    if(pangram(str)==26)       //calling the function
    {
        printf("The Entered String is a Pangram String\n");
    }
    else
    {
        printf("The Entered String is not a Pangram String\n");
    }

}

int pangram(char str[])        //declaring a function
{
    int index=0;
    int arr[26]={};
    int count=0;

    for(int i=0; str[i]!='\0'; i++)  //iterate the loop
    {
        if(str[i]>='a' && str[i]<='z')   // checking for lower case a to z
        {
            index=str[i]-'a';       //its convert  alphabet to integer
        }
        else if(str[i]>='A' && str[i]<='Z')     // checking for the upper case A to Z
        {
            index=str[i]-'A';      // its convert alphabet to integer
        }
        if(arr[index] == 0)
        {
            arr[index]=1;    // setting the array element value

            count++;    //increment the count
        }
    }
    return count;
}
