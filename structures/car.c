#include <stdio.h>
#include <string.h>
struct car
{
	int modelNo;
	char brandName[20];
	char color[20];
};

int main()
{
	struct car c1={101,"Audi","Black"};
	printf("Model No: %d\n",c1.modelNo);
	printf("Brand Name:%s\n",c1.brandName);
	printf("Color:%s\n",c1.color);

	struct car c2;
	c2.modelNo=100;
	// c2.brandName="BMW";
	strcpy(c2.brandName,"BMW");
	// c2.color="Black";
	strcpy(c2.color,"Black");

	printf("Model No: %d\n",c2.modelNo);
	printf("Brand Name:%s\n",c2.brandName);
	printf("Color:%s\n",c2.color);


}