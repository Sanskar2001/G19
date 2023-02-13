#include <stdio.h>
#include <string.h>
int main()
{
	char str[20]="string";
	
	int s=0,e=strlen(str)-1;

	while(s<=e)
	{
		char tmp=str[s];
		str[s]=str[e];
		str[e]=tmp;
		s++;
		e--;
	}

	printf("%s",str);
}