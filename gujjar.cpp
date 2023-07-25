#include<stdio.h>
main()
{
	int a,b,result;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	result = a - (-b);
	
	printf("%d", result);
}
