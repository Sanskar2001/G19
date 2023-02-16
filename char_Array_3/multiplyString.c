char * multiply(char * ch1, char * ch2){

   int n=strlen(ch1);
   int m=strlen(ch2);

    // if(strcmp(ch1,ch2)==0)
    // return "0";
   char ans[400]="";

   int myans[400]={0};

    int k;
    int s=400;
    k;
   for(int i=n-1;i>=0;i--)
   {
       k= (--s);
    
       for(int j=m-1;j>=0;j--)
       {

        int pdt= (ch1[i]-'0') * (ch2[j]-'0');
        int effpdt= pdt+myans[k];
        myans[k]=effpdt%10;
        myans[k-1]+=effpdt/10;
        k--;

       }
   }
  
    int i=0;
    while(i<400 && myans[i]==0)
    { i++;
     if(i==400)
     return "0";
    }

    char* res=(char*) malloc(400);
    int z=0;
    while(i<400)
    {   
         res[z++]=myans[i++]+'0';
       

    }
    res[z]='\0';
    puts(res);
  return res;
   
}