#include <stdio.h>
/*
Name:
Date:
Description:. check whether it form palindrome or not
Sample Input:
Sample Output:
 */


int main()
{

    int n,rem;
    int rev=0;
    int num;

    printf("Enter the number:");
    scanf("%d",&n);
    
    num=n;
    while(n > 0)
    {
	rem= n % 10;
	rev=rev*10+rem;
	n = n/10;
        
    }
    
    if (num == rev)
    {
	printf("ia a palindrome");
     
    }
    else
    {
	printf("is not a palindrome");

    }
        
}
