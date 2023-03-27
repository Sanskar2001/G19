//https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/description/
#include <stdio.h>
#include<string.h>
int min(int a,int b)
{
	return a<b ? a : b;
}
int minTimeToType(char * word)
{
	 int time=0;
	 char curr='a';

	 //abc

	 for(int i=0;i<strlen(word);i++)
	 {
	 	int timeToShiftOp1=word[i]-curr;
	 	int timeToShiftOp2= (26-timeToShiftOp1);
	 	int actualTimeToShift=min(timeToShiftOp1,timeToShiftOp2);


	 	time+=actualTimeToShift+1;
	 	curr=word[i];

	 	
	 }

	 return time;
}
int main()
{

	char str[]="abc";
	printf("%d\n",minTimeToType(str));

}