#include <stdio.h>
void merge(int* arr1,int* arr2,int* tmp,int n,int m)
{

	int i=0,j=0,k=0;


	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		tmp[k++]=arr1[i++];			
	
		else 
		tmp[k++]=arr2[j++];
	}


	while(i<n)
	{
		tmp[k++]=arr1[i++];
	}


	while(j<m)
	{
		tmp[k++]=arr2[j++];
	}


}
int main()
{
	int arr1[]={2,5,10};
	int arr2[]={3,6,7};

	int tmp[100];

	int n=3,m=3;


	merge(arr1,arr2,tmp,n,m);

	for(int i=0;i<(n+m);i++)
		printf("%d ",tmp[i]);
}