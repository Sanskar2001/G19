#include <stdio.h>
void goKStepsForward(int* arr,int i,int k,int n)
{
   int index=(i+k)%n;

   printf("You are at index=%d & value=%d\n",index,arr[index]);
}

void printAllSubarrays(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr[(i+j)%n]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	// goKStepsForward(arr,2,4,n);
	printAllSubarrays(arr,n);
}