#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[]={100,20,-10,40,50 };
	int n=sizeof(arr)/sizeof(int);

	int currSum=0;
	int maxSum=INT_MIN;

	int allNegative=1;

	for (int i = 0; i < n; ++i)
	{
		
			if(arr[i]>0)
			allNegative=0;

		if(currSum+arr[i]>0)
		{
			currSum+=arr[i];
		}

		else
		{
			currSum=0;
		}


		maxSum= currSum>maxSum ? currSum : maxSum;


	}


	//,,,,
	if(allNegative==1)
	{
		int maxNo=INT_MIN;
		for(int i=0;i<n;i++)
		{
			maxNo= arr[i]>maxNo ? arr[i] : maxNo;
		}

		printf("max sum is %d",maxNo);
	}
    
    else
	printf("max sum is %d",maxSum );
    

	
}