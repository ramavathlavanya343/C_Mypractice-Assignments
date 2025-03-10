#include <stdio.h>
/*
Name:
Date:
Description:3. WAP to multiplication table
Sample Input:
Sample Output:
*/
int main()
{

int i,num;

printf("Enter the number:");

scanf("%d",&num);

for(i=1;i<=10;i++)
{


    printf("%d x %d = %d\n",num,i,num*i);
}

}
