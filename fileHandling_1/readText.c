#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp=fopen("demo.txt","r");

	char ch;
	ch=fgetc(fp);
	// fscanf(fp,"%c",&ch);

	// printf("EOF=%d",EOF);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}

	// fscanf(fp,"%c",&ch);


	// while(ch!=' ')
	// {
	// 	printf("%c",ch);
	// 	fscanf(fp,"%c",&ch);
	// }



}