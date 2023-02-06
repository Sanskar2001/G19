#include<stdio.h>
int main()
{
	int arr[]={1,2,-1,4,6};
	int n=5;

	int csum=0;
	int maxSum=0;
	for (int i = 0; i < n; ++i)
	{
		if(csum+arr[i]>0)
			csum+=arr[i];

		else
		 csum=0;

	}

	printf("%")
}