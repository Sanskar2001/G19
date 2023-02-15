#include<iostream>
int main() {

	char str[1000];

	scanf("%s",str);

	for(int i=0;i<strlen(str);i++)
	{
		if(i%2==0)
		str[i]++;

		else
		str[i]--;

	}

	printf("%s",str);
	return 0;
}