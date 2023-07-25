#include<stdio.h>
void cal_square(int n);
main()
{
	int num;
	scanf("%d", &num);
	
	cal_square(num);
}

void cal_square(int n)
{
	if(n > 0)
	{
	cal_square(n-1);
	printf("%d, ", n*n);
	}	
}
