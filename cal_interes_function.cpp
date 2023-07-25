//Write a function to calculate simple interest.

#include<stdio.h>
float cal_simple_interest(float tak_amount, float interest );//Function deceleration
main()//Main body
{
	int tak_amount,interest;
	printf("Enter taken amount:");
	scanf("%d",&tak_amount);
	printf("Enter interest rate:");
	scanf("%d",&interest);
	float total = cal_simple_interest(tak_amount,interest);//Function call
	printf("Your interest is according to your interest rate is: %.1f",total);
}
//Function body
float cal_simple_interest(float tak_amount,float interest)
/*We use float because after division some values are given in points
due to int data type program donnot give actual ans*/ 

{
    return (tak_amount/100)*interest;
}
