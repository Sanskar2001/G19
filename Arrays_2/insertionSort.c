#include<stdio.h>
int main()
{
	int arr[]={10,4,1,5,7};
	int n=5;


	for (int i = 1; i <n; ++i)
	{
		

		int currElement=arr[i];

		int j=i-1;

		while(j>=0 && arr[j]>currElement)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=currElement;
	}


	for(int i=0;i<n;i++)
	printf("%d ", arr[i]);
}