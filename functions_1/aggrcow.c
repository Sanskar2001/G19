#include <stdio.h>
#include<stdbool.h>
bool canPlaceCow(int stalls[],int cows,int minDist)
{

}
int main()
{
	int stalls[]={1,2,4,8,9};
	int n=5;
	int cows=3;


	int s=0,e=stalls[n-1]-stalls[0];
	int mid;
	int ans=0;

	while(s<=e)
	{
		mid=(s+e)/2;

		if(canPlaceCow(stalls,cows,mid))
		{
			s=mid+1;
			ans=mid;

		}
		else
			e=mid-1;

	}
	printf("Max dist between cows can be %d",ans);
}