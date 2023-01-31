#include <stdio.h>
int main()
{
	int arr[]={5,0,3,8,6};
	int n=5;


	int left[n];
	int right[n];

	left[0]=arr[0];
	right[n-1]=arr[n-1];


	for (int i = 1; i <n; ++i)
	{
		left[i]= left[i-1]>arr[i] ? left[i-1] : arr[i];
	}


	for (int i = n-2; i>=0 ; i--)
	{
		right[i]= right[i+1]<arr[i+1] ? right[i+1] : arr[i+1];
	}



	for (int i = 0; i < n; ++i)
	{
		if(left[i]<=right[i])
		{
			printf("%d",i+1 );
			break;
		}
	}
}