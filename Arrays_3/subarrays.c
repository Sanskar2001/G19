#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	int n=4;


	for (int st = 0; st < n; st++)
	{
		for (int en= st; en <n; en++)
		{
			for (int i = st; i <=en; i++)
			{
				printf("%d ",arr[i]);
			}

			printf("\n");
		}


	}
}