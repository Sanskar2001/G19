#include <stdio.h>
#include<limits.h>
int main()
{
	int arr[]={1,2,3,4};
	int n=4;


	int csum[n];

	csum[0]=arr[0];


	for (int i = 1; i <n; ++i)
	{
		csum[i]=csum[i-1]+arr[i];
	}
 	
 	// for (int i = 0; i < n; ++i)
 	// {
 	// 	printf("%d ",csum[i]);
 	// }



 	int maxSum=INT_MIN;
 	for(int st=0;st<n;st++)
 	{

 		for (int en = st+1; en<n ; en++)
 		{
 			 int currSum=INT_MIN;
 			  if(st>0)
 			  currSum=csum[en]-csum[st-1];
 			 else
 			 	currSum=csum[en];


 			  maxSum= currSum>maxSum ? currSum : maxSum;
 		}
 	}


 			// maxSum= (csum[n-1]>maxSum) ? csum[n-1] : maxSum;
 		printf("maxSum is %d ",maxSum);

}