//Write a function to calculate HCF of two numbers
#include<stdio.h>
int cal_hcf(int num,int num2);
main()
{
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("\nEnter second number");
	scanf("%d",&num2);
	int max=num1;
	int min=num2;
	if(max<min)
	{
		max=num2;
		min=num1;
	}
	int res = cal_hcf(max,min);
	printf("%d",res);
}
int cal_hcf(int max,int min)
{
	int static orig=min;
	int i=min;
	if(orig%i==0 &&max%i ==0)
	return i;
	cal_hcf(min-1,max);
}
