//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
int cal_area_of_circle(int radius);
main()
{
	int radius;
	printf("Enter radius of the circle:");
	scanf("%d",&radius);
	int area = cal_area_of_circle(radius);
	printf("\nArea of a circle is: %d",area);
}
int cal_area_of_circle(int radius)
{
	int pi=3.14;
	int area = pi*(radius*radius);
	return area;
}
