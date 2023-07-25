#include<stdio.h>
main()
{
	int num,note=1000,res;
	printf("Enter your bill:");
	scanf("%d",&num);
	while(num>0)
	{
		res=num/note;
	    printf("\n%d notes of %d",res,note);
		note=note/10;
		
	}
	
}
