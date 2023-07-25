//Program using function show the sum of two numbers; 

#include<stdio.h>
int even_odd_check(int &sum);
int add(int &a,int &b);
main()

{
	int a,b,sum;
	char str[4],choice,yes,no; 
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("\nsum = %d",sum);
	printf("\nDo you went to check that given sum is even or odd\nEnter yes or no");
	scanf("%c",&choice);
	choice=yes;
	if(choice==yes);
	{
	even_odd_check(sum);
	if(sum==1)
	{
	printf("\nSum is even");	
	}
	else 
	{
			printf("\nSum is odd");
	}
	}

    	printf("Thanks");
    
	
}
//& is used for return by refference;
int add(int &a,int &b)
{
	int sum=a+b;
	return (sum);
}
int even_odd_check(int &sum)

{
   if(sum%2==0)
   return 1;
   else
   return 0;
}
