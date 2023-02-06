#include <stdio.h>
int main()
{
	int arr[]={1,2,2,2,2,4,9,10,25};
	int n=sizeof(arr)/sizeof(int);
	int target=2;

	int s=0,e=n-1;
	int mid;
	int ans;

	while(s<=e)
	{

		mid=(s+e)/2;

		if(target>arr[mid])
		{
			s=mid+1;
		}

		else if(target<arr[mid])
		{
			e=mid-1;
		}
		else
		{	
			ans=mid;
			e=mid-1;
		}

	}

	printf("First occurence of %d is at index %d",target,ans);

}