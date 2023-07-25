//Write a function to print first N natural numbers.

#include<stdio.h>
void natural_num(int n);//Function deceliration;
main()//main body
{
	int nth;
	printf("Enter nth number:");
	scanf("%d",&nth);
	if(nth <= 0)
	printf("You entered negative/zero number");
	natural_num(nth);
}
//Function body;
void natural_num(int nth)
{
	if(nth <=-1)
	return ;
	natural_num(nth-1);
	printf("%d ",nth);
}
