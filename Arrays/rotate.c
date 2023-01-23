#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};
    int n=4;

    int first=arr[0];

    arr[0]=arr[n-1];
    // 5 2 3 4 5

    int i=n-2;

    while (i>=1)
    {
        arr[i+1]=arr[i];
        i--;
    
    }

    arr[1]=first;

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}