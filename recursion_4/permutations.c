#include <stdio.h>
#include<string.h>
void swap(char* str,int i,int j)
{
	char tmp=str[i];
	str[i]=str[j];
	str[j]=tmp;
}
void permutations(char* str,int idx)
{
	if(idx==strlen(str))
	{
		printf("%s\n",str);
		return;
	}

	for(int i=idx;i<strlen(str);i++)
	{
			swap(str,idx,i);
			permutations(str,idx+1);
			swap(str,idx,i);
	}
}
int main()
{
 	char str[10]="abc";
 	permutations(str,0);
}