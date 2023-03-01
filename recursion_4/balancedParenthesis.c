#include <stdio.h>
void generateBrackets(int n,int open,
	int close,char *ans,int currentPosition)
{

	if(currentPosition==2*n)
	{
		printf("%s\n",ans);
		return;
	}

	if(open<n)
	{
		ans[currentPosition]='(';
		generateBrackets(n,open+1,close,ans,currentPosition+1);
	}

	if(close<open)
	{
		ans[currentPosition]=')';
		 generateBrackets(n,open,close+1,ans,currentPosition+1);
	}





}
int main()
{
	int n=4;
	char ans[100]="";
	generateBrackets(n,0,0,ans,0);
}