#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isRotation(char* str1,char* str2)
{
	char tmp[100];

	strcpy(tmp,str1);
	strcat(tmp,str1);

	//abcdabcd

	//cdab
	for(int i=0;i<strlen(tmp);i++)
	{
		if(tmp[i]==str2[0])
		{

			for(int j=0;j<strlen(str2);j++)
			{
				if(str2[j]!=tmp[i+j])
					break;

				if(j==strlen(str2)-1)
					return true;
			}
		}

	}

	return false;

}
int main()
{
	char str1[10]="abcd";
	char str2[10]="cdab";


	(isRotation(str1,str2)==true)?printf("Strings are rotations\n"): printf("Not Roations\n");;
}