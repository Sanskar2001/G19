 #include <stdio.h>
 int main()
 {
 	int arr[]={10,45,1,2,30};
 	int n=sizeof(arr)/sizeof(int);
 	int k=2;

 	for(int i=0;i<n-1;i++)
 	{
 		int sm=arr[i];
 		int idx=i;
 		for (int j= i+1; j <n ;j++)
 		{
 			if(sm>arr[j])
 			{
 			  idx=j;
 			  sm=arr[j];
 			}
 		}

 		int tmp=arr[i];
 		arr[i]=sm;
 		arr[idx]=tmp;
 	}

 	for (int i = 0; i < n; ++i)
 	{
 		printf("%d ",arr[i]);
 	}

 	printf("%dth smallest ele is %d\n",k,arr[k-1]);
 printf("%dth largest ele is %d\n",k,arr[n-k]);
 }
 
 