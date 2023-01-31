#include <stdio.h>
int main()
{
	int arr[]={1,8,6,2,5,4,8,3,7};
	int n=sizeof(arr)/sizeof(int);


	int s=0;
	int e=n-1;
	int maxArea=0;

	while(s<e)
	{
	  int hieght= arr[s]<arr[e] ? arr[s] : arr[e];
	  int width=e-s;

	  int currentArea= hieght*width;   

	  maxArea= currentArea>maxArea ? currentArea : maxArea;

	  // leftwali < rightwali	
	  if(arr[s]<arr[e])
	  {
	  	s++;
	  }

	  //leftwali > rightwali
	  else if(arr[s]>arr[e])
	  {
	  	 e--;
	  }

	  else
	  {
	  	s++;
	  	e--;
	  }
	  
	}


	printf("maxArea=%d",maxArea);
}