#include <stdio.h>

// void addNos(int a,int b)
// {
// 	printf(" sum=%d ",a+b );
// }
int addNos(int a,int b);

int main()
{
	int a=10,b=5;

	int sum=addNos(a,b);

	printf("sum=%d",addNos(a,b) );
}
int addNos(int a,int b)
{
	return a+b;
}