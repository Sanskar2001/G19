#include<stdio.h>
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
	char customerName[20];
	char orderStatus[100];
	
};

int main()
{

    struct customer c1 ={"Vipul","Rajpura",false};
    struct order o1={101,500,"Vipul","Placed"};

    printf("Customer Name: %s\n",c1.customerName);
    printf("Address: %s\n",c1.address);
    if(c1.isPrimeMember)
    printf("Prime Member: Yes\n");
    else
    printf("Prime Member: No\n");

    printf("Order No:%d\n",o1.orderNo);
    printf("Price:%d\n",o1.price);
    printf("Customer Name:%s\n",o1.customerName);
    printf("Order Status:%s\n",o1.orderStatus);
    
    
        
        

    








}