#include <stdio.h>
/*
Name:
Date:
Description:
Sample Input:
Sample Output:
*/


int main()
{

int n,i;
int count=0;

printf("Enter the number:");

scanf("%d",&n);

for(i=1;i<=n;i++)
{
    if(n % i == 0)
    {
        count++;
    }
}
    if(count == 2)
    {
        printf("%d Is a prime number:\n",n);
    }
    else
    {
        printf("%d not a prime number\n",n);
    }
}
