#include <stdio.h>
#include <stdbool.h>
bool bisearch(int* arr,int n,int key)
{
	int s=0,e=n-1;
	int mid;
	while(s<=e)
	{

		mid=(s+e)/2;

		if(key==arr[mid])
			return true;

		else if(key<arr[mid])
			e=mid-1;

		else
			s=mid+1;

	}
	return false;
}
int findKthPositive(int* arr, int n, int k)
{

	int i=1;
	int cnt=0;

	while(cnt!=k)
	{

		bool isFound=bisearch(arr,n,i);


		if(!isFound)
		cnt++;

		i++;
	}

	return --i;
}
int main()
{
	int arr[]={2,3,4,7,11};
	int n=5;
	int k=5;

	printf("%d ",findKthPositive(arr,n,k));

}