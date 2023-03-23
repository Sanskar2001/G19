#include <stdio.h>
int calPower(int a,int n)
{
	int ans=1;

	while(n)
	{
		int currentBit= n&1;
		if(currentBit)
			ans=ans*a;

		n=n>>1;
		a=a*a;
	}

	return ans;
}
int main()
{
	int a=5;
	int n=4;

	printf("%d ",calPower(a,n));
}