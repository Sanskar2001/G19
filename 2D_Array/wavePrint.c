#include <stdio.h>
void wavePrint(int arr[][3],int n)
{

	int j=0;
	while(j<n)
	{

		if(j%2==0)
		{
			//print downwards
			for(int i=0;i<n;i++)
				printf("%d ",arr[i][j] );
		}

		else
		{
			//print upwards
			for(int i=n-1;i>=0;i--)
				printf("%d ",arr[i][j]);
		}

		j++
	}

}
int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=3;
	wavePrint(arr,n);

}