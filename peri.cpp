#include<stdio.h>
main()
{
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=(num*2)-1;j++)
		{
			if(j<=(num+i)-1&&j>=(num+i)-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
