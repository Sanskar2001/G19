#include<stdio.h>

void engineOn()
{
	printf("Engine started");
}

void iginitionOn()
{
	printf("Start button pressed");
	engineOn();
}
int main()
{

	iginitionOn();

}