#include <stdio.h>
#include<string.h>
char keypad[10][4]={" "," ","abc","def"
,"ghi","jkl",
"mno","pqrs","tuv","wxyz"};

void combinations(char* str,int idx,char* ans)
{
	if(idx==strlen(str))
	{
		printf("%s\n",ans);
		return;
	}

	int key=str[idx]-'0';

	for(int i=0;i<strlen(keypad[key]);i++)
	{
			ans[idx]=keypad[key][i];
			combinations(str,idx+1,ans);
	}
}

int main()
{
	char str[10]="23";
	char ans[10]=" ";
	combinations(str,0,ans);
}