#include <stdio.h>
int main(int argc, char const *argv[])
{
		
		int arr[]={1,2,10,30,45};
		int n=5;
		int target=40;

		int s=0;
		int e=n-1;

		while(s<e)
		{

			if(arr[s]+arr[e]==target)
			{
				printf("Element at %d and element at %d is giving a sum=%d",s,e,target);
				break;
			}

			else if(arr[s]+arr[e]<target)
			{
				s++;
			}
			else
			{
				e--;
			}
		}





	    return 0;
}