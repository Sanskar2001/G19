#include <stdio.h>

void func(int arr[],int n)
{
	arr[0]=10;
	printf("Inside func: \n");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);

printf("\n");
}
int main()
{
	int arr[]={1,2,3,4};
	int n=4;

	func(arr,n);

	
	printf("Inside main function");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);

}