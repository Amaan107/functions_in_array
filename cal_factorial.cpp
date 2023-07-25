//Write a function to calculate the factorial of a number.

#include<stdio.h>
int cal_factorial(int num);
main()
{
 int num;
 printf("Enter any number:");
 scanf("%d",&num);
 int res=cal_factorial(num);
 printf("%d",res);	
}
int cal_factorial(int num)
{
	int static res;
	if(num<=0)
	return 1;
	res=num*cal_factorial(num-1);
	return res;
}
