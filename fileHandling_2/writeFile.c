#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE* fp=fopen("newFile.txt","w");

	if(fp==NULL)
	{
		printf("Can't open file");
		exit(1);
	}


	// Accept an input 
	// from the user and write it to the given file

	printf("Enter a message:\n");

	char str[100];
	while(strlen(gets(str))>0)
	{
		fputs(str,fp);
		fputs("\n",fp); 

	}

	fclose(fp);
}