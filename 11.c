/*find area and perimeter of circle*/
#include<stdio.h>
int main()
{
	int radius;
	float area,perimeter;
	radius=6;
	
	perimeter=2*3.13*radius;
	printf("perimeter of the circle = %f inches\n",perimeter);
	area=3.14*radius*radius;
	printf("area of the circle = %f square inches\n",area);
	
	return 0;
}
