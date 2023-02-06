#include <stdio.h>
int main()
{
	int arr[]={4,5,1,2,3};
	int n=5;

	int target=2;
	int s=0,e=n-1;
	int mid;
	int ans=-1;

	while(s<=e)
	{

		mid=(s+e)/2;

		if(target==arr[mid])
		{
			printf("element found at %d index",mid);
			break;
		}
		if(arr[s]=<arr[mid])
		{
			// 1st half

			if(target>=arr[s] && target<arr[mid])
			{
				// 1st half left

				e=mid-1;
			}

			else
			s=mid+1;


		}

		else if( arr[mid]=<arr[e])
		{
			
			if(target>=arr[mid] && target<arr[e])
			{
				s=mid+1;
			}
			else
				e=mid-1;
		}
	}

}