#include <stdio.h>
#include<stdbool.h>
bool canPlaceCow(int stalls[],int cows,int n,int minDist)
{	
	int cnt=1;
	int lastCowPosition=stalls[0];

	for(int i=1;i<n;i++)
	{
		if(stalls[i]-lastCowPosition>=minDist)
		{
			lastCowPosition=stalls[i];
			cnt++;

			if(cnt==cows)
				return true;
		} 


	}
return false;

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

		if(canPlaceCow(stalls,cows,n,mid))
		{
			s=mid+1;
			ans=mid;

		}
		else
			e=mid-1;

	}
	printf("Max dist between cows can be %d",ans);
}