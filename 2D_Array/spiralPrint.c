#include <stdio.h>
void spiralPrint(int arr[][3],int n)
{
	// 1. PRINT STROW FROM Left TO Right STROW++
	// 2. PRINT ENCOL FROM Top TO Bottom ENCOL--
	// 3. PRINT ENROW FROM Right to Left ENROW--
	// 4. PRINT STCOL FROM Bottom to Top STCOL++

	int stcol=0,encol=n-1,strow=0,enrow=n-1;

	while(strow<n && enrow>=0 && stcol<n && encol>=0)
	{
		// strow

		for(int i=stcol; i<=encol  ;i++)
			printf("%d ",arr[strow][i]);

		strow++;

		// encol
		for(int i=strow;i<=enrow ; i++)
			printf("%d ",arr[i][encol]);

		encol--;

		// enrow
		for(int i=encol ; i>=stcol  ; i-- )
			printf("%d ",arr[enrow][i]);

		enrow--;

		// stcol
		for(int i=enrow;i>=strow  ;i--)
			printf("%d ",arr[i][stcol]);

		stcol++;

	}



}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=3;
	spiralPrint(arr,n);
}