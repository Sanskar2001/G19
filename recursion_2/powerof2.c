#include <stdio.h>
int powerof2(int n)
{
   if(n==0)
   	return 1;

	int ans=2*powerof2(n-1);
	return ans;
}
int powerof2Better(int n)
{
	if(n==0)
	return 1;

	int half=powerof2(n/2);
	int fullresult=half*half;	
	if(n%2!=0)
	fullresult*=2;
	return fullresult;
}
int main()
{
	int n=6;
	printf("%d ",powerof2(n));

	printf("\n %d",powerof2Better(n));




}