#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct bill
{
	char name[20];
	float total,gst,price;
};
typedef struct bill s;
s a[30];
float sum=0;
main()
{

	int i,n;
	
	
	printf("enter the number of items purchased\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		printf("enter the item purchased\n");
		scanf("%s",a[i].name);
	
	
	
	
		printf("enter the price of the item\n");
		scanf("%f",&a[i].price);
		
		a[i].gst=((a[i].price*18)/100);
		a[i].total=a[i].price+a[i].gst;
	
		
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i].total;
		
	}
	printf("\n");
	printf("****************************************************************************\n");
	printf("****hotel amaravathi***\n");
	printf("item            price         gst         total price \n");
	for(i=0;i<n;i++)
	{
	
			printf("%s          %f     %f    %f\n\n",a[i].name,a[i].price,a[i].gst,a[i].total);
	}
	printf("total amount to be payed                  %f\n   ",sum);
	printf("*******************************************************************\n");
	printf("THANKYOU VISIT AGAIN\n");
}
