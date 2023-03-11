#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;

	fp=fopen("demo.txt","r");

	if(fp==NULL)
	{	printf("can't open file/ file does'nt exist \n");
		exit(1);
	}
	
	else
	printf("File opened\n");

	char ch;

	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c",ch);
	fscanf(fp,"%c",&ch);
	printf("%c ",ch);




	fclose(fp);
}