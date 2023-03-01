#include <stdio.h>
#include<stdbool.h>

typedef int bmw;
// typedef struct customer cust;

enum amazonOrderStatus{
	Payment_failed,Placed,Dispatched,Shipped,Delievered
};

typedef struct customer 
{
	char customerName[20];
	char address[100];
	bool isPrimeMember;
}cust;

struct order
{
	int orderNo;
	int price;
	// char customerName[20];
	struct customer customerDetails;
	// char orderStatus[100];
	enum amazonOrderStatus orderStatus;
};

void printOrderDetails(struct order o)
{
		printf("Order No: %d\n",o.orderNo);
		printf("Order Price: %d\n",o.price);
		printf("Address: %s\n",o.customerDetails.address);
		printf("customer Name: %s\n",o.customerDetails.customerName);
		// printf("Order Status:%d \n",o.orderStatus);

		switch(o.orderStatus)
		{
			case 0: printf("Order Status: Payment failed\n");
								break;

			case 1: printf("Order Status: Placed\n");
								break;

			case 2: printf("Order Status: Dispatched\n");
							break;

			case 3: printf("Order Status: Shipped\n");
							break;

			case 4: printf("Order Status: Delievered\n");
							break;

		}


}

void printCustomerDetails(struct customer c)
{

	printf("Customer Name:%s\n",c.customerName);
	printf("Address:%s\n",c.address);

	if(c.isPrimeMember==true)
	printf("Prime Member: Yes\n");

}

void printAllCustomers(cust customersList[100],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Customer Name: %s\n",customersList[i].customerName);
		printf("Address: %s\n",customersList[i].address);
		if(customersList[i].isPrimeMember==true)
		printf("Prime Member: Yes\n");
	}
}


int main()
{
		//  cust c1={"Meher","Rajpura,Punjab",false};
		//  cust c2={"Kunal","Rajpura,Punjab",false};
		//  cust c3={"Prena","Rajpura,Punjab",true}; 
		//  cust c4={"Vineet","Rajpura",true};
		//  cust c5={"Muskan","Rajpura",true};
		// cust c6={"Manav","Rajpura",true};
		// cust c7={"Nandini","Bangalore",true};
		// cust c8={"Mehak","Jaipur",false};

	int n=7;
	cust customersList[100] ={ 
		{"Meher","Rajpura,Punjab",false},
		{"Kunal","Rajpura,Punjab",false},
		{"Vineet","Rajpura",true},
		{"Muskan","Rajpura",true},
		{"Manav","Rajpura",true},
		{"Nandini","Bangalore",true},
		{"Mehak","Jaipur",false}

	};

	printAllCustomers(customersList,n);

	printf("\n\n\n\n");





		// struct order o1={101,500,"Rajpura,Punjab","Meher"};
		// struct order o2={102,1500,"Rajpura,Punjab","Kunal"};
		// struct order o3={103,2000,"Rajpura,Punjab","Prena"};


		// struct order o1={101,500,"Rajpura,Punjab",c1};
		// struct order o2={102,1500,"Rajpura,Punjab",c2};
		// struct order o3={103,2000,"Rajpura,Punjab",c3};


		// struct order o1={101,500,c1,"Payment Fail"};
		// struct order o2={102,1500,c2,"Placed"};
		// struct order o3={103,2000,c3,"Dispatched"};
		// struct order o4={104,3000,c1,"Delivered"};
		// struct order o5={105,1200,c3,"mujhe nahi pata"};
		// struct order o6={106,1700,c2,"chala jaa yaha se"};


		struct order o1={101,500,customersList[0],Payment_failed};
		struct order o2={102,1500,customersList[1],Placed};
		struct order o3={103,2000,customersList[2],Dispatched};
		struct order o4={104,3000,customersList[3],Delievered};
		struct order o5={105,1200,customersList[4],Placed};
		struct order o6={106,1700,customersList[5],Shipped};


		printOrderDetails(o1);
		printOrderDetails(o2);
		printOrderDetails(o3);
		printOrderDetails(o4);
		printOrderDetails(o5);
		printOrderDetails(o6);

		// printf("\n\n");
		// printCustomerDetails(c1);
		// printCustomerDetails(c2);
		// printCustomerDetails(c3);

		bmw x=55;
		printf("\n%d",x);

		//o1
		// printf("Order No: %d\n",o1.orderNo);
		// printf("Order Price: %d\n",o1.price);
		// printf("Address: %s\n",o1.customerDetails.address);
		// printf("customer Name: %s\n",o1.customerDetails.customerName);


		//o2
		// printf("Order No: %d\n",o2.orderNo);
		// printf("Order Price: %d\n",o2.price);
		// printf("Address: %s\n",o2.customerDetails.address);
		// printf("customer Name: %s\n",o2.customerDetails.customerName);


		//o3
		// printf("Order No: %d\n",o3.orderNo);
		// printf("Order Price: %d\n",o3.price);
		// printf("Address : %s\n",o3.customerDetails.address);
		// printf("customer Name: %s\n",o3.customerDetails.customerName);



		

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