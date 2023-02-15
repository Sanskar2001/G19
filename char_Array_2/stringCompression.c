#include<stdio.h>
#include<string.h>
void func(char * str, char* ans)
{
     int k=0;
     int n=strlen(str);

    for(int i=0;i<n;i++)
    {
            int cnt=1;
            char ch=str[i];

        while(str[i]==str[i+1])
        {
            cnt++;
            i++;
         }
        
        ans[k++]=ch;
        char cntString[100];
        sprintf(cntString,"%d",cnt);
        for(int j=0;j<strlen(cntString);j++)
        ans[k++]=cntString[j];
        //  printf("%c%d",ch,cnt);
    }
    ans[k]='\0';

}
int main(void) {

    char str[1000];
    scanf("%s",str);
    int n=strlen(str);
    char ans[1000];
    func(str,ans);
   
    printf("%s",ans);
	return 0;
}