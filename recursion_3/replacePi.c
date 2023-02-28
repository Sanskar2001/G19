#include <stdio.h>
#include<string.h>
void replacepi(char* str,int idx)
{
	if(idx==strlen(str))
	return;

	if(str[idx]=='p' && str[idx+1]=='i')
	{
		//right shift by 2
		for(int i=strlen(str);i>=idx;i--)
			str[i+2]=str[i];

		// now i have enough space to place 1 and 4
		str[idx]='3';
		str[idx+1]='.';
		str[idx+2]='1';
		str[idx+3]='4';

	}

	replacepi(str,idx+1);
}
int main()
{
	char str[100]="pippiipi";
	replacepi(str,0);

	printf("%s ",str);
}