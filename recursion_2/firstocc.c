#include <stdio.h>
int firstocc(int* arr,int idx,int n,int key)
{
	if(idx==n)
	return -1;

	if(arr[idx]==key)
		return idx;

	
	firstocc(arr,idx+1,n,key);
	// return ans;
}
int main()
{
	int arr[]={1,2,2,3,3,3,3,4,5};
	int n=9;
	int key=3;

	printf("first occ of %d is %d",key,firstocc(arr,0,n,key));
}