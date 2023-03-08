#include <stdio.h>
void binarySearch(int* arr,int n,int s,int e,int key)
{
	int mid=(s+e)/2;

	if(arr[mid]==key)
	{
		printf("%d is found at %d",key,mid);
		return;
	}

	else if(arr[mid]>key)
		e=mid-1;
	else
		s=mid+1;

	binarySearch(arr,n,s,e,key);
}
int main()
{
	int arr[]={1,4,5,6,7,10,23,56,89};
	int n=9;
	int key=56;
	binarySearch(arr,n,0,n-1,key);
}