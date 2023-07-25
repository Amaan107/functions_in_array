//Write a function to print first N odd natural numbers.

#include<stdio.h>
void first_n_odd_num(int nth);
main()
{
	int nth;
	printf("Enter Nth number:");
	scanf("%d",&nth);
	if(nth<=0)
	printf("Negative/Zero is not available");
	first_n_odd_num(nth*2-1);
}

void first_n_odd_num(int nth)
{
	if(nth<=0)
	return ;
	
	first_n_odd_num(nth-2);
	printf("%d ",nth);
}
