https://hack.codingblocks.com/app/contests/3942/200/problem
#include<stdio.h>
#include<string.h>
void removeDuplicate(char* str)
{
	int n=strlen(str);
	int j=0;
	for(int i=0;i<n;i++)
	{
		char ch=str[i];

		while(str[i]==str[i+1])
		{
			i++;
		}

	
		printf("%c",ch);
	}

	
}
int main(void) {


	char str[1000];
	fgets(str,1000,stdin);


	char ans[1000];

	removeDuplicate(str);
	


	return 0;
}