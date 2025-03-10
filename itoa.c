#include <stdio.h>
void itoa(int num, char str[]);


/*
Enter the number : 1234
Integer to string is 1234

Test Case 2:
user@emertxe] ./itoa
Enter the number : -1234
Integer to string is -1234

Test Case 3:
user@emertxe] ./itoa
Enter the number : +1234
Integer to string is 1234

Test Case 4:
user@emertxe] ./itoa
Enter the number : a1234
Integer to string is 0
*/

int main()
{

    int num;
    char str[100];

  //  printf("Enter the number:");
    scanf("%d", &num);

    itoa(num, str);  //calling the function

    printf("Integer to string is %s", str);  //print the integer to string


}

void itoa(int num, char str[])   //declareing a function with arguments
{
   int i=0;

  int sign=1;



 if(num < 0)  // checking for negative numbers

 {
     sign =-1;
     num=-num;
 }

if(num == 0)  //for 0
{
    str[i++] = '0';  //storing it is string
    str[i]='\0';
    return;

}

else
{
    while(num > 0)  //check the condition it num greter than 0  we have do
    {
        str[i++] = num % 10 + '0';  //got the reminder //123  3 will got

        num=num / 10;
    }
}

if(sign < 0) //for negative signs

    str[i++]='-';

    str[i] ='\0';


    char temp;

    for(int j=0;j<i/2;j++)  //iterate the loop
{
    temp=str[j];   //swap and strore it in temp

    str[j]=str[i-j-1];

    str[i-j-1]=temp;

}

str[i] ='\0';

}


