#include <stdio.h>
int getLSB(int n)
{
	int mask=1;
	int lsb=n&1;
	return lsb;
}
int main()
{
	int n=5;
	printf("%d",getLSB(n));
}