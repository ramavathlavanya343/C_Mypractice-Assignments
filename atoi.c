/*
   Enter a numeric string: 12345
String to integer is 12345

Test Case 2 :
Enter a numeric string: -12345
String to integer is -12345

Test Case 3 :
Enter a numeric string: +12345
String to integer is 12345

Test Case 4 :
Enter a numeric string: +-12345
String to integer is 0
 */

#include <stdio.h>
int my_atoi(const char str[]);

int main()
{

    char str[100];

    printf("Enter a numeric string : ");
    scanf("%s", str);          //read the strings from user

    printf("String to integer is %d\n", my_atoi(str));   //calling the function
}

int my_atoi(const char str[])
{
    int j=0;

    int n;
    int sum=0;
    int sign=1;  //declare a sign by default



    if(str[0] == '-' || str[0] == '+')
    {

        sign= str[0]=='-'?-1:+1; //for negative or positive
        j=1;


      for(int i=1;i<=str[i] != '\0';i++)  //check from first index to sign character
    {
        n=str[i]-'0';

        if(str[i] >= '0' && str[i] <= '9')  //check if character is a digit
        {
            sum = sum*10+n;


        }

        else
        {
            return sign * sum ;  //invalid characte like -+

        }
    }


    }
    else
    {
        for(int i=0;i<str[i] != '\0';i++)  //check fromstartion positive character or numbers like 1234
        {

          n=str[i] - '0';

            if(str[i] >='0' && str[i] <='9')  //check if the character is digit or not
            {
                sum=sum*10+n;

            }
            else
            {
                return sign * sum;

            }
        }
    }

        return sign * sum;

    }
