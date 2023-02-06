#include <stdio.h>
int main()
{
	int arr[]={4,5,1,2,3};
	int n=5;


	int s=0,e=n-1;
	int mid;

	while(s<=e)
	{

		mid=(s+e)/2;

		if(arr[mid]>=arr[s])
		s=mid+1;

		else if(arr[mid]<=arr[e])
		 e=mid-1;


		if(arr[mid]>arr[mid+1])
		{
			printf("Min ele is %d",arr[mid+1]);

			break;
		}

		if(arr[mid]<arr[mid-1])
		{
			printf("Min ele is %d", arr[mid]);
			break;
		}

	}
}