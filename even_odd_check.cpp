//Program for using function show that the number is even or odd;

#include<stdio.h>

int even_odd_check(int &number);//When we call by refference we use &;
main()

{
	int number,count;
	printf("Enter any number:");
	scanf("%d",&number);
	count = even_odd_check(number);
	if(count==1)
	printf("%d is even",number);
	else
	printf("%d is odd",number);
	
}

int even_odd_check(int &number)

{
   if(number%2==0)
   return 1;
   else
   return 0;
}

