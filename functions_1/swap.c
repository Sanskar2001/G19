#include <stdio.h>

void swap(int a,int b)
{
	int tmp=a;
	a=b;
	b=tmp;

	printf("Inside Swap a=%d b=%d \n",a,b);
}

void swapByPointers(int* a,int* b)
{
	int tmp= *a;
	*a= *b;

	*b=tmp;

	printf("value of a is %d value of b is %d",*a,*b);
}
int main()
{
	int a=10,b=5;

	// swap(a,b);
	swapByPointers(&a,&b);
	printf("Inside main a=%d b=%d",a,b);

}