#include <stdio.h>
int main()
{
	int arr[]={5,10,4,3,1};
	int n=5;

	for (int i = 1; i <n; i+=2)
	{
		if(i>0 && arr[i]<arr[i-1])	
		{
			int tmp=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=tmp;
		}

		if(i<n-1 && arr[i]<arr[i+1])
		{
			int tmp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tmp;
		}


	}


	for (int i = 0; i <n; ++i)
	{
		printf("%d ",arr[i]);
	}



}