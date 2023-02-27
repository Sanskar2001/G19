#include <stdio.h>

void moveAtEnd(int* arr,int x,int idx,int n)
{

	if(idx==n-1)
		return;


	if(arr[idx]==x)
	{
		int tmp=arr[idx];
		arr[idx]=arr[idx+1];
		arr[idx+1]=tmp;
	}

	moveAtEnd(arr,x,idx+1,n);

}
int main()
{
	int arr[5]={1,2,3,4,5};
	int n=5;
	int x=3;


	moveAtEnd(arr,x,0,n);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}
}