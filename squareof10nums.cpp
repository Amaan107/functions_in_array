#include<stdio.h>
int calculate_square(int y);
main()
{
	for( int x=1; x<=10; x++)
	{
		int sq = calculate_square(x);
		printf("%d, ",sq);
	}
}
    int calculate_square(int y)
    {
	 return y*y;	
	}	

