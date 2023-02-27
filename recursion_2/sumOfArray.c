#include <stdio.h>
int sumOfArr(int* arr,int n,int idx)
{
		if(idx==n)
			return 0;

	int sum=arr[idx]+sumOfArr(arr,n,idx+1);
	return sum;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;

	printf("%d ",sumOfArr(arr,n,0));
}