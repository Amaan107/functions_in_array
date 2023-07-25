//4.	Write a program to ask user to enter 5 numbers in an array, and find the second largest value in array.
#include<stdio.h>
int second_last_max(int num);
main()
{
	int second_large,large;
	int arry[5];
	for(int i=0 ;i<5 ;i++)
	{
	printf("Enter number:");
	scanf("%d",&arry[i]);
	}
	for(int j=0 ;j<5 ;j++)
	{
		if(arry[j] > large){
		second_large=large;
		large=arry[j];	
		}
    else if(arry[j]>second_large)
    second_large=arry[j];
    else 
    continue;
}
printf("%d is second largest",second_large);
}



