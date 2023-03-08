#include <stdio.h>
int totalWays=0;
void cntWays(int maze[][4],int x,int y,int n)
{

	if(x>=n || y>=n)
	return;
	
	if(maze[x][y]==0)
		return;

	if(x==n-1 && y==n-1 )
	{
		totalWays++;
	}
}
int main()
{

	int maze[4][4]={
		{1,1,1,1},
		{1,0,0,1},
		{1,0,0,1},
		{1,1,1,1},

		};

		int n=4;

}