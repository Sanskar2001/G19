#include <stdio.h>
int ways(int n)
{
	if(n==0)
	return 1;

	if(n<0)
	return 0;

	return ways(n-1)+ways(n-2)+ways(n-3);
}
int main()
{
	int n=4;

	printf("No of ways to reach %d step is %d ",n,ways(n));
}