#include<stdio.h>
main()
{
	int num,k=0;
	printf("Enter any number:");
	scanf("%d",&num);
	int half=(num+1)/2;
	for(int i=1; i<=num; i++)
	{
		i<=half?k++:k--;
		for(int j=1; j<=num; j++)
		{
			if(j>=(half+1)-k && j<=(half-1)+k)
			printf("%d",k);
			else
			printf(" ");
		}
		printf("\n");
	}
}
