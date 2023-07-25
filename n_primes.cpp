//Write a function to print first N prime numbers

#include<stdio.h>
void n_prime(int num);
main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	n_prime(num);
	
}
void n_prime(int num)
{
	int count;
	for(int static i=1;i<=num;i++)
	{
		for(int j=1;j<=num/2;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d",i);
	}
	
}

