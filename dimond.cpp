#include<stdio.h>
main()
{
	int num ,k=0;
	scanf("%d", &num);
	int h = (num+1)/2;
	for(int i=1; i<=num; i++)
	{
		i <= h ? k++: k--;
		for(int j=1; j<=num; j++)
		{	
			if(j>= (h+1)-k && j<= (h-1)+k)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
