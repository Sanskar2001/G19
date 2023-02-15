// https://hack.codingblocks.com/app/contests/3942/489/problem
#include<stdio.h>
#include<string.h>
int main(void) 
{

	char str[2000];
	char ans[2000];
	int k=1;

	scanf("%s",str);
	printf("%c",str[0]);
	ans[0]=str[0];
	for(int i=1;i<strlen(str);i++)
	{
		int diff= str[i]-str[i-1];


		printf("%d%c",diff,str[i]);
		
		// char diffString[100];
		// sprintf(diffString,"%d",diff);

		// for(int j=0;j<strlen(diffString);j++)
		// ans[k++]=diffString[j];

		// ans[k++]=str[i];
		
	}

	// printf("%s",ans);

	return 0;
}