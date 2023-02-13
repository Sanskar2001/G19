#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20]="Hello";
	char str2[10]="World";
	
	int i=0,j=0;

	while(str1[i]!='\0')
	{
		i++;
	}


	while(j<strlen(str2))
	{
		str1[i]=str2[j];
		i++;
		j++;
	}

	str1[i]='\0';

	printf("%s",str1);
}