#include <stdio.h>
int main()
{
	int arr1[]={1,2,3,3,4,5};
	int n=sizeof(arr1)/sizeof(int);

	int arr2[]={3,3,5};
	int m=3;
	int i=0,j=0;


	while(i<n || j<m)
	{
			if(arr1[i]<arr2[j])
			{
				i++;
			}
			else if(arr1[i]==arr2[j])
			{
				printf("%d ",arr1[i]);
				i++;
				j++;
			}

			else 
			{
				j++;
			}
	}
}