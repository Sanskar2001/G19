#include <stdio.h>


int main()
{
	int x=10;

	int* ptr= &x;

	// printf("%p",&x);
	printf(" value at address %p is %d",ptr, (*ptr));
}