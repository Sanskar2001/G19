#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{

		int n;
		scanf("%d",&n);
		int cnt=0;
		for (int i = 0; i < n; ++i)
		{
			int age;
			scanf("%d",&age);

			if(age>=10 && age<=60)
				cnt++;

		}

		printf("%d\n",cnt);

	}
}