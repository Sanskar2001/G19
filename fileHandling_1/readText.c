#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp=fopen("demo.txt","r");

	char ch;


	// fscanf(fp,"%c",&ch);
	// while(ch!=EOF)
	// {
	// 	printf("%c",ch);
	// 	fscanf(fp,"%c",&ch);
	// }

	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}


	
	// fscanf(fp,"%c",&ch);


	// while (ch!='\n')
	// {
	// 	printf("%c",ch);
	// 	fscanf(fp,"%c",&ch);
	// }
	
	// printf("\n");
	// ch=fgetc(fp);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);
	// fscanf(fp,"%c",&ch);
	// printf("%c",ch);







	// printf("EOF=%d",EOF);
	// while(ch!=EOF)
	// {
	// 	printf("%c",ch);
	// 	ch=fgetc(fp);
	// }

	// fscanf(fp,"%c",&ch);


	// while(ch!=' ')
	// {
	// 	printf("%c",ch);
	// 	fscanf(fp,"%c",&ch);
	// }



}