// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int evenarray[100];
    int oddarray[100];
    
    int evensize=0;
    int oddsize=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 ==0)
        {
            evenarray[evensize]=arr[i];
            evensize+=1;
        }
        else {
            oddarray[oddsize]=arr[i];
            oddsize+=1;
        }
    }
    printf("Even array elements:");
    for(int i=0;i<evensize;i++)
    {
        printf("%d ",evenarray[i]);
    }
    printf("\n");
    
     printf("Odd array elements:");
    for(int i=0;i<oddsize;i++)
    {
        printf("%d ",oddarray[i]);
    }
    
   printf("\n");

    return 0;
    
}
