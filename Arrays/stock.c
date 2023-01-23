#include<stdio.h>
int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=6;

    int lmin=arr[0];
    int maxProfit=0;
    for(int i=1;i<n;i++)
    {
        int currentProfit= arr[i]-lmin;
        maxProfit = (currentProfit>maxProfit) ? currentProfit : maxProfit;
        lmin= (arr[i]<lmin) ? arr[i] : lmin;
    }

    printf("\n Max Profit is %d",maxProfit);
}