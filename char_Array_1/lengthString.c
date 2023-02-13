#include <stdio.h>
#include <string.h>
int main()
{
	char str[20]="string";
	int len=0,i=0;

	while(str[i]!='\0')
	{
		i++;
		len++;
	}

	printf("%d",len);
}