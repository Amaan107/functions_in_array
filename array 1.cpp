//15.	Write a program to reverse an array without using second array.
#include<stdio.h>
main()
{
	
	int arry[5]={5,6,7,8,9};
	
	for(int i=0 ;i<5 ;i++)
	{
	printf("\n%d",arry[i]);
}
		printf("\nAfter");
	for(int j=4 ; j>=0 ; j--)
	{
			int	reg=arry[j]%10;
			
		printf("\n%d",reg);
	}

}

