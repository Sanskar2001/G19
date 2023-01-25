#include <stdio.h>
int main()
{
	int arr[]={10,2,4,6,5,1};
	int n=6;


	for (int i = 0; i <n; ++i)
	{	
		int isSorted=1;
		for (int j = 0; j<n-1-i; ++j)
		{

			
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				isSorted=0;
			}
		}



		if(isSorted)
			break;


		printf("Arrays after %dth pass",i);
		for (int j= 0; j<n; ++j)
		{
			printf("%d ",arr[j]);
		}
		printf("\n");

	}


	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}
}