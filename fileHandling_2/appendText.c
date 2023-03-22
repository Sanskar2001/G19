#include <stdio.h>
int main()
{
	FILE *fp=fopen("demo.txt","a");

	// preserve old content and write the new content 
	// after the previous content

	fputc('#',fp);
}