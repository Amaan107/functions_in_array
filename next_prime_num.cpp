//Write a function to find the next prime number of a given number.
 
#include<stdio.h>
int next_prime_num(int num);
main()
{
int num,reserve=2;
printf("Enter any number:");
scanf("%d",&num);
int res = next_prime_num(num+1);	
}

int next_prime_num(int num)
{
	int res=2,count;
	for(int i=2;i<=num*2;i++)
	{
		if(num%i==0)
		count++;
		else
		res++;
	}
	if(count==1)
	return num;
}
