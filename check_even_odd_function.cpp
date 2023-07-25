//Program check given number is even or odd and prime or not using function;

#include<stdio.h>
int check_prime(int num);
int check_even_odd(int num);
main()
{
	int number;
	printf("Enter any number:");
	scanf("%d",&number);
	int res = check_even_odd(number);
	int count = check_prime(number);
	if(res==1)
	printf("%d is Even",number);
	else
	printf("%d is Odd",number);
	

}
int check_even_odd(int num)
{
	if(num%2==0)
	return 1;
	else
	return 0;
}
int check_prime(int num)
{
	int count=0;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==0)
	return 1;
	else 
	return 0;
}

