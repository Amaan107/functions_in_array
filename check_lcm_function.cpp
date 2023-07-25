//Write a function to calculate LCM of two numbers.

#include<stdio.h>
int cal_lcm(int num,int nm2);
main()
{
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("\nEnter second number:");
	scanf("%d",&num2);
	int max=num1;
	int min=num2;
	if(max<num2)
	{
		max=num2;
		min=num1;
	}
	int res = cal_lcm(max,min);
	printf("%d",res);
}
int cal_lcm(int max,int min)
{
	for(int i=max ; i <= max*min ; i++)
	{
	if(i%max==0 && i%min==0)
	return i;	
	}
	
	
}
