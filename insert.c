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

    int a[50];
    int size,num,pos;

    printf("Enter the size :");
    scanf("%d",&size);

    printf("Enter the arry elements :");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&a[i]);

    }

    printf("Enter the data value :");
    scanf("%d",&num);

    printf("Enter the position :");
    scanf("%d",&pos);

    if(pos <= 0 || pos > size+1)
    {
	printf("Invalid Position\n");
    }

    else
    {
//	for(int i=size-1;i>pos-1;i--)

	for(int i=size;i>=pos;i--)
	{
	   // a[i+1]=a[i];
	    a[i]=a[i-1];
	}

	a[pos-1]=num;
	size++;
    
printf("After inser array is :");

for(int i=0;i<size;i++)
{
    printf("%d ",a[i]);

}
printf("\n");

}

return 0;


}


