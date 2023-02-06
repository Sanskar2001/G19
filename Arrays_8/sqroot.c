#include <stdio.h>
int main()
{
	int n=120;

	int s=0,e=n,mid;

	while(s<=e)
	{

		mid=(s+e)/2;

		if(mid*mid==n)
		{
			printf("Square root of %d is %d ",n,mid);
			break;
		}

		else if(mid*mid>n)
		{
			e=mid-1;
		}

		else
		s=mid+1;

	}
}