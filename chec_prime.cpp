//Write a function to check whether a given number is Prime or not.
#include<stdio.h>
int check_prime(int num);
main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	int res=check_prime(num);
	if(res==1)
	printf("\n%d is prime",num);
	else
	printf("\n%d Not prime",num);
}
int check_prime(int num)
{
	
	int count;
	for(int i=2; i<=num/2;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==0)
	return 1;
	else
	return 0;
}

