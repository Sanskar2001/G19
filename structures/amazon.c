#include <stdio.h>
#include<stdbool.h>

struct customer 
{
	char customerName[20];
	char address[100];
	bool isPrimeMember;
};

struct order
{
	int orderNo;
	int price;
	// char customerName[20];
	struct customer customerDetails;
};

int main()
{
		struct customer c1={"Meher","Rajpura,Punjab",false};
		struct customer c2={"Kunal","Rajpura,Punjab",false};
		struct customer c3={"Prena","Rajpura,Punjab",true}; 

		// struct order o1={101,500,"Rajpura,Punjab","Meher"};
		// struct order o2={102,1500,"Rajpura,Punjab","Kunal"};
		// struct order o3={103,2000,"Rajpura,Punjab","Prena"};


		// struct order o1={101,500,"Rajpura,Punjab",c1};
		// struct order o2={102,1500,"Rajpura,Punjab",c2};
		// struct order o3={103,2000,"Rajpura,Punjab",c3};


		struct order o1={101,500,c1};
		struct order o2={102,1500,c2};
		struct order o3={103,2000,c3};



		//o1
		printf("Order No: %d\n",o1.orderNo);
		printf("Order Price: %d\n",o1.price);
		printf("Address: %s\n",o1.customerDetails.address);
		printf("customer Name: %s\n",o1.customerDetails.customerName);


		//o2
		printf("Order No: %d\n",o2.orderNo);
		printf("Order Price: %d\n",o2.price);
		printf("Address: %s\n",o2.customerDetails.address);
		printf("customer Name: %s\n",o2.customerDetails.customerName);


		//o3
		printf("Order No: %d\n",o3.orderNo);
		printf("Order Price: %d\n",o3.price);
		printf("Address : %s\n",o3.customerDetails.address);
		printf("customer Name: %s\n",o3.customerDetails.customerName);

		//o1
		// printf("Order No: %d\n",o1.orderNo);
		// printf("Order Price: %d\n",o1.price);
		// printf("Address: %s\n",o1.address);
		// printf("customer Name: %s\n",o1.customerName);

		// //o2
		// printf("Order No: %d\n",o2.orderNo);
		// printf("Order Price: %d\n",o2.price);
		// printf("Address: %s\n",o2.address);
		// printf("customer Name: %s\n",o2.customerName);

		// //o3
		// printf("Order No: %d\n",o3.orderNo);
		// printf("Order Price: %d\n",o3.price);
		// printf("Address : %s\n",o3.address);
		// printf("customer Name: %s\n",o3.customerName);

}